#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

INTERFACE=`networksetup -listallnetworkservices | grep USB`
CONF=/Library/Application\ Support/WLAN/com.realtek.utility.wifi/
APP=/Library/Application\ Support/WLAN/StatusBarApp.app
SET_MODE=/Library/Application\ Support/WLAN/StatusBarApp.app/Contents
POPUP=/usr/local/sbin/io_wnu_popup
ACTIVE_DEVICE=`awk '{print $1}' "$CONF"*rfoff.rtl`

#autofix disabled wifi (testen on 1 device
#osascript -e 'quit app "StatusBarApp"'
#rm -rf "$CONF"*.rtl
#osascript -e 'open app "StatusBarApp"'
#sleep 1
#grep -rl "0" "$CONF"*rfoff.rtl > "$CONF"MAC ; cat "$CONF"MAC | cut -c 60-71 > "$CONF"DEVICE
#osascript -e 'quit app "StatusBarApp"'

exec 6<&0
exec < /Library/Application\ Support/WLAN/com.realtek.utility.wifi/MAC
read a1

function switch_wifi {
  if [ "$ACTIVE_DEVICE" != "1" ]; then
    osascript -e 'quit app "StatusBarApp"'
    echo "1" > "$a1"
    "$POPUP" -title 'Wi-Fi disabled' -message '' -timeout 3
    open -a "$APP"
  else
    osascript -e 'quit app "StatusBarApp"'
    echo "0" > "$a1"
    "$POPUP" -title 'Wi-Fi enabled' -message '' -timeout 3
    open -a "$APP"
  fi
}

function switch_service {
  ps aux | grep io_wnuup | grep bash | awk '{print $11}' > /tmp/io_service

  exec 6<&0
  exec < /tmp/io_service
  read a1

  if [ "$a1" != "bash" ]; then
      bash ~/.io_wnuup &
      "$POPUP" -title ' Service enabled' -message '' -timeout 3
      rm -rf /tmp/io_service
  else
      pkill -f ~/.io_wnuup &
      "$POPUP" -title ' Service disabled' -message '' -timeout 3
  fi
}

function switch_mode {
  CHECK=`ls -al | sed -n '9p' | awk '{print $11}'`
  if [ "$CHECK" != "Dark" ]; then
	   rm -rf Resources
     ln -s Dark Resources
     osascript -e 'quit app "StatusBarApp"'
     open -a "$APP"
     "$POPUP" -title 'Dark Mode' -message ''  -timeout 3
  else
    rm -rf Resources
    ln -s Light Resources
    osascript -e 'quit app "StatusBarApp"'
    open -a "$APP"
    "$POPUP" -title 'Light Mode' -message '' -timeout 3
  fi
}

function test_dns {
  if [ "nslookup -type=txt debug.opendns.com | grep 127.0.0.1 | awk '{print "127.0.0.1"}' | tail -n1" != '127.0.0.1' ]; then
    "$POPUP" -title 'DNSCrypt enabled' -message '' -timeout 3
  else
    "$POPUP" -title 'DNSCrypt not enabled' -message '' -timeout 3
  fi
}

StatusBarApp_POPUP="$("$POPUP" -title 'I/O Wireless Network Utility' -message 'Actions?' -actions "Switch Wi-Fi","Enable TOR","Disable TOR","Enable DNSCrypt","Disable DNSCrypt","Enable OpenVPN","Disable OpenVPN","Switch Service","Dark/Light mode","Fix Device","Show Utility","Hide Utility" -timeout 30 -sound default -appIcon "$APP"/Contents/Resources/ModelIcon.icns)"
  case $StatusBarApp_POPUP in
    "@TIMEOUT") `pkill -f ~/.io_wnuup` ;;
    "@CLOSED") echo "You clicked on the default alert' close button" ;;
    "@CONTENTCLICKED") echo "You clicked the alert's content !" ;;
    "@ACTIONCLICKED") echo "You clicked the alert default action button" ;;
		"Switch Wi-Fi") switch_wifi ;;
    "Enable TOR")  networksetup -setsocksfirewallproxy "$INTERFACE" 127.0.0.1 9050 off ; /usr/local/sbin/tor & sleep 3 ; open https://check.torproject.org ; "$POPUP" -title 'TOR enabled' -message '' -timeout 3 ;;
    "Disable TOR") killall -9 tor ; networksetup -setsocksfirewallproxystate "$INTERFACE" off ; sleep 3 ; "$POPUP" -title 'TOR disabled' -message '' -timeout 3 ;;
    "Enable DNSCrypt") sudo /usr/local/sbin/dnscrypt-proxy -a 127.0.0.1:53 -r 91.214.71.181:5353 --provider-name=2.dnscrypt-cert.ru.d0wn.biz --provider-key=0ECA:BC40:E0A1:335F:0221:4240:AB86:2919:D16A:2393:CCEB:4B40:9EB9:4F24:3077:ED99 & networksetup -setdnsservers "$INTERFACE" 127.0.0.1 && test_dns;;
    "Disable DNSCrypt") sudo killall -9 dnscrypt-proxy ; networksetup -setdnsservers "$INTERFACE" Empty && "$POPUP" -title 'DNSCrypt disabled' -message '' -timeout 3 ;;
    "Switch Service") switch_service ;;
    "Enable OpenVPN") sudo /usr/local/sbin/openvpn --config ~/config.ovpn & "$POPUP" -title 'OpenVPN ensabled' -message '' -timeout 3;;
    "Disable OpenVPN") sudo killall -9 openvpn & "$POPUP" -title 'OpenVPN disabled' -message '' -timeout 3;;
    "Dark/Light mode") cd "$SET_MODE" ; switch_mode ;;
    "Fix Device") grep -rl "0" "$CONF"*rfoff.rtl > "$CONF"MAC ; cat "$CONF"MAC | cut -c 60-71 > "$CONF"DEVICE ; "$POPUP" -title 'The device is fixed' -message '' -timeout 3 ;;
    "Show Utility") osascript -e 'quit app "StatusBarApp"' ; echo "1" > "$a1" ; echo "0" > "$a1" ; open -a "$APP" ;;
    "Hide Utility") osascript -e 'quit app "StatusBarApp"' ; echo "1" > "$a1" ;;
    **) echo "? --> $StatusBarApp_POPUP" ;;
  esac
