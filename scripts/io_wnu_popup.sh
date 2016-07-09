#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

INTERFACE=`networksetup -listallnetworkservices | grep USB`
CONF=/Library/Application\ Support/WLAN/com.realtek.utility.wifi/
APP=/Library/Application\ Support/WLAN/StatusBarApp.app
SET_MODE=/Library/Application\ Support/WLAN/StatusBarApp.app/Contents
POPUP=/usr/local/sbin/io_wnu_popup
ACTIVE_DEVICE=`awk '{print $1}' "$CONF"*rfoff.rtl`
SERVICE=`launchctl list | grep io_wnu | awk '{print $2}'`

# fix mac:
networksetup -getmacaddress "$INTERFACE" | awk '{print $3}' > "$CONF"MAC-FIX

# Status
status_macaddress=$(cat "$CONF"MAC-FIX)
status_public_ip=`dig +short myip.opendns.com @resolver1.opendns.com`
status_dnscrypt=$(cat "$CONF"dnscrypt)
status_dnscrypt_update_base=$(cat "$CONF"dnscrypt_update)
status_tor=$(cat "$CONF"tor)
status_openvpn=$(cat "$CONF"openvpn)
status_service=$(cat "$CONF"service)

# check service status
if [ "$SERVICE" = "0" ]; then
  echo "Service Enabled" > "$CONF"check_service
  echo "Enabled" > "$CONF"service
  echo "0" > "$CONF"service_status
else
  echo "Service Disabled" > "$CONF"check_service
  echo "Disabled" > "$CONF"service
  echo "1" > "$CONF"service_status
fi

CHECK_SERVICE=$(cat "$CONF"check_service)

exec 6<&0
exec < /Library/Application\ Support/WLAN/com.realtek.utility.wifi/MAC
read a1

function switch_wifi {
  if [ "$ACTIVE_DEVICE" != "1" ]; then
    osascript -e 'quit app "StatusBarApp"'
    echo "1" > "$a1"
    "$POPUP" -title 'Wi-Fi disabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
    open -a "$APP"
  else
    osascript -e 'quit app "StatusBarApp"'
    echo "0" > "$a1"
    "$POPUP" -title 'Wi-Fi enabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
    open -a "$APP"
  fi
}

function switch_tor {
  unit=$(cat "$CONF"tor)

  if [ "$unit" != "Enabled" ]; then
    echo Enabled > "$CONF"tor
    networksetup -setsocksfirewallproxy "$INTERFACE" 127.0.0.1 9050 off ; /usr/local/sbin/tor & sleep 3 ; open https://check.torproject.org ; "$POPUP" -title 'TOR enabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  else
    echo Disabled > "$CONF"tor
    killall -9 tor ; networksetup -setsocksfirewallproxystate "$INTERFACE" off ; sleep 3 ; "$POPUP" -title 'TOR disabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  fi
}

function test_dns {
  if [ "nslookup -type=txt debug.opendns.com | grep 127.0.0.1 | awk '{print "127.0.0.1"}' | tail -n1" != '127.0.0.1' ]; then
    "$POPUP" -title 'DNSCrypt enabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  else
    "$POPUP" -title 'DNSCrypt not enabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  fi
}

function update_dnscrypt {
  RESOLVERS_UPDATES_BASE_URL=https://download.dnscrypt.org/dnscrypt-proxy
  RESOLVERS_LIST_BASE_DIR=/tmp/dnscrypt-proxy
  RESOLVERS_LIST_PUBLIC_KEY="RWQf6LRCGA9i53mlYecO4IzT51TGPpvWucNSCh1CBM0QTaLn73Y7GFO3"
  mkdir -p /tmp/dnscrypt-proxy
  curl -L --max-redirs 5 -4 -m 30 --connect-timeout 30 -s "${RESOLVERS_UPDATES_BASE_URL}/dnscrypt-resolvers.csv" > "${RESOLVERS_LIST_BASE_DIR}/dnscrypt-resolvers.csv.tmp"
  curl -L --max-redirs 5 -4 -m 30 --connect-timeout 30 -s "${RESOLVERS_UPDATES_BASE_URL}/dnscrypt-resolvers.csv.minisig" > "${RESOLVERS_LIST_BASE_DIR}/dnscrypt-resolvers.csv.minisig"
  minisign -Vm ${RESOLVERS_LIST_BASE_DIR}/dnscrypt-resolvers.csv.tmp -x "${RESOLVERS_LIST_BASE_DIR}/dnscrypt-resolvers.csv.minisig" -P "$RESOLVERS_LIST_PUBLIC_KEY" -q
  mv -f ${RESOLVERS_LIST_BASE_DIR}/dnscrypt-resolvers.csv.tmp ${RESOLVERS_LIST_BASE_DIR}/dnscrypt-resolvers.csv
  echo `date "+%y/%m/%d %H:%M:%S"` > "$CONF"dnscrypt_update
}

function switch_dnscrypt {
  unit=$(cat "$CONF"dnscrypt)

  if [ "$unit" != "Enabled" ]; then
    echo Enabled > "$CONF"dnscrypt
    update_dnscrypt
    networksetup -setdnsservers "$INTERFACE" 127.0.0.1 ; sudo /usr/local/sbin/dnscrypt-proxy --ephemeral-keys --resolvers-list=/tmp/dnscrypt-proxy/dnscrypt-resolvers.csv --resolver-name=dnscrypt.eu-dk --user=nobody & test_dns
  else
    echo Disabled > "$CONF"dnscrypt
    sudo killall -9 dnscrypt-proxy ; networksetup -setdnsservers "$INTERFACE" Empty ; "$POPUP" -title 'DNSCrypt disabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
    rm -rf /tmp/dnscrypt-proxy
  fi
}

function switch_openvpn {
  unit=$(cat "$CONF"openvpn)

  if [ "$unit" != "Enabled" ]; then
    echo Enabled > "$CONF"openvpn
    sudo /usr/local/sbin/openvpn --config ~/config.ovpn & "$POPUP" -title 'OpenVPN enabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  else
    echo Disabled > "$CONF"openvpn
    sudo killall -9 openvpn & "$POPUP" -title 'OpenVPN disabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  fi
}

function switch_utility {
  unit=$(cat "$CONF"utility)

  if [ "$unit" != "Enabled" ]; then
    echo Enabled > "$CONF"utility
    osascript -e 'open app "StatusBarApp"' & "$POPUP" -title 'Shown Utility' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  else
    echo Disabled > "$CONF"utility
    osascript -e 'quit app "StatusBarApp"' & "$POPUP" -title 'Hidden Utility' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  fi
}

function switch_service {
  launchctl list | grep wnu | awk '{print $2}' > "$CONF"service_status

  exec 6<&0
  exec < "$CONF"service_status
  read a1

  if [ "$a1" != "0" ]; then
    launchctl load /Library/LaunchAgents/io_wnu.plist
    "$POPUP" -title ' Service enabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
    echo "Service Enabled" > "$CONF"check_service
    echo "Enabled" > "$CONF"service
    echo "0" > "$CONF"service_status
  else
    launchctl unload /Library/LaunchAgents/io_wnu.plist
    "$POPUP" -title ' Service disabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
    echo "Service Disabled" > "$CONF"check_service
    echo "Disabled" > "$CONF"service
    echo "1" > "$CONF"service_status
  fi
}

function switch_mode {
  CHECK=`ls -al | sed -n '9p' | awk '{print $11}'`
  if [ "$CHECK" != "Dark" ]; then
	   rm -rf Resources
     ln -s Dark Resources
     osascript -e 'quit app "StatusBarApp"'
     open -a "$APP"
     "$POPUP" -title 'Dark Mode' -message ''  -timeout 2 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  else
    rm -rf Resources
    ln -s Light Resources
    osascript -e 'quit app "StatusBarApp"'
    open -a "$APP"
    "$POPUP" -title 'Light Mode' -message '' -timeout 2 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  fi
}

StatusBarApp_POPUP="$("$POPUP" -title 'I/O Wireless Network Utility' -subtitle "$CHECK_SERVICE" -message 'Actions?' -actions "Switch Wi-Fi","Switch TOR","Switch DNSCrypt","Switch OpenVPN","Switch Service","Dark/Light mode","Fix Device","Status","Show/Hide Utility" -timeout 15 -sound default -appIcon "$APP"/Contents/Resources/ModelIcon.icns)"
  case $StatusBarApp_POPUP in
    "@TIMEOUT") `pkill -f ~/.io_wnuup` ;;
    "@CLOSED") echo "You clicked on the default alert' close button" ;;
    "@CONTENTCLICKED") echo "You clicked the alert's content !" ;;
    "@ACTIONCLICKED") echo "You clicked the alert default action button" ;;
		"Switch Wi-Fi") switch_wifi ;;
    "Switch TOR") switch_tor ;;
    "Switch DNSCrypt") switch_dnscrypt ;;
    "Switch Service") switch_service ;;
    "Switch OpenVPN") switch_openvpn ;;
    "Dark/Light mode") cd "$SET_MODE" ; switch_mode ;;
    "Fix Device") grep -rl "0" "$CONF"*rfoff.rtl > "$CONF"MAC ; cat "$CONF"MAC | cut -c 60-71 > "$CONF"DEVICE ; "$POPUP" -title 'The device is fixed' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns ;;
    "Show/Hide Utility") switch_utility ;;
    "Status") "$POPUP" -title 'Status services' -actions "MAC - $status_macaddress","Public IP - $status_public_ip","TOR - $status_tor","DNSCrypt - $status_dnscrypt","DNSCrypt Base - $status_dnscrypt_update_base","OpenVPN - $status_openvpn","Service - $status_service" -timeout 10 -appIcon "$APP"/Contents/Resources/ModelIcon.icns ;;
    **) echo "? --> $StatusBarApp_POPUP" ;;
  esac
