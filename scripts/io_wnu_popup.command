#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

APP=/Library/Application\ Support/WLAN/StatusBarApp.app
CONF=/Library/Application\ Support/WLAN/com.realtek.utility.wifi/
POPUP=/usr/local/sbin/io_wnu_popup
SET_MODE=/Library/Application\ Support/WLAN/StatusBarApp.app/Contents
SERVICE=`launchctl list | grep io_wnu | awk '{print $2}'`
ACTIVE_DEVICE=`awk '{print $1}' "$CONF"*rfoff.rtl`
CHECK_SERVICE=$(cat "$CONF"check_service)

# check_interface_name
networksetup -listallnetworkservices | grep USB > "$CONF"device_name
INTERFACE=$(cat "$CONF"device_name)

if [ "networksetup -listallnetworkservices | grep USB" != 'cat "$CONF"device_name' ]; then
    networksetup -listallnetworkservices | grep USB > "$CONF"device_name
else
    networksetup -listallnetworkservices | grep Adapter > "$CONF"device_name
fi

# fix mac:
networksetup -getmacaddress "$INTERFACE" | awk '{print $3}' > "$CONF"MAC-FIX

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

function switch_wifi {
  exec 6<&0
  exec < /Library/Application\ Support/WLAN/com.realtek.utility.wifi/MAC
  read a1
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
    networksetup -setsocksfirewallproxy "$INTERFACE" 127.0.0.1 9050 off ; /usr/local/sbin/tor -f "$CONF"torrc.sample & sleep 3 ; open https://check.torproject.org ; "$POPUP" -title 'TOR enabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
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
    networksetup -setdnsservers "$INTERFACE" 127.0.0.1 ; osascript -e "do shell script \"`sudo /usr/local/sbin/dnscrypt-proxy --ephemeral-keys --resolvers-list=/tmp/dnscrypt-proxy/dnscrypt-resolvers.csv --resolver-name=dnscrypt.eu-dk --user=nobody`\" with administrator privileges" & sleep 2 & test_dns
  else
    echo Disabled > "$CONF"dnscrypt
    osascript -e "do shell script \"`sudo killall -9 dnscrypt-proxy`\" with administrator privileges" ; networksetup -setdnsservers "$INTERFACE" Empty ; "$POPUP" -title 'DNSCrypt disabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
    rm -rf /tmp/dnscrypt-proxy
  fi
}

function switch_openvpn {
  unit=$(cat "$CONF"openvpn)

  if [ "$unit" != "Enabled" ]; then
    echo Enabled > "$CONF"openvpn
    osascript -e "do shell script \"`sudo /usr/local/sbin/openvpn --config ~/config.ovpn`\" with administrator privileges" & sleep 3 ; "$POPUP" -title 'OpenVPN enabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  else
    echo Disabled > "$CONF"openvpn
    osascript -e "do shell script \"`sudo killall -9 openvpn`\" with administrator privileges" ; "$POPUP" -title 'OpenVPN disabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
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

function switch_ssh_server {
  unit=$(cat "$CONF"io_ssh_server)

  if [ "$unit" != "Enabled" ]; then
    echo Enabled > "$CONF"io_ssh_server
    osascript -e "do shell script \"`sudo systemsetup -f -setremotelogin on`\" with administrator privileges"
    "$POPUP" -title 'SSH Service enabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  else
    echo Disabled > "$CONF"io_ssh_server
    osascript -e "do shell script \"`sudo systemsetup -f -setremotelogin off`\" with administrator privileges"
    "$POPUP" -title 'SSH Service disabled' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  fi
}

function switch_mode {
  CHECK=`ls -al | sed -n '9p' | awk '{print $11}'`
  if [ "$CHECK" != "Dark" ]; then
	   rm -rf Resources
     ln -s Dark Resources
     osascript -e 'quit app "StatusBarApp"'
     open -a "$APP"
     "$POPUP" -title 'Dark Mode' -message '' -timeout 2 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  else
    rm -rf Resources
    ln -s Light Resources
    osascript -e 'quit app "StatusBarApp"'
    open -a "$APP"
    "$POPUP" -title 'Light Mode' -message '' -timeout 2 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  fi
}

function switch_dns {
  Switch_DNS_CASE="$("$POPUP" -title 'I/O Wireless Network Utility' -subtitle "$CHECK_SERVICE" -message 'Actions?' -actions "DNS DHCP","DNS Local","DNS Google","DNS OpenDNS","Flush DNS Cache" -timeout 15 -sound default -appIcon "$APP"/Contents/Resources/ModelIcon.icns)"
      case $Switch_DNS_CASE in
      "@TIMEOUT") echo "timeout" ;;
      "@CLOSED") echo "You clicked on the default alert' close button" ;;
      "@CONTENTCLICKED") echo "You clicked the alert's content !" ;;
      "@ACTIONCLICKED") echo "You clicked the alert default action button" ;;
      "DNS DHCP") networksetup -setdnsservers "$INTERFACE" Empty ; "$POPUP" -title 'Enabled DNS DHCP' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns ;;
      "DNS Local") networksetup -setdnsservers "$INTERFACE" 127.0.0.1 ; "$POPUP" -title 'Enabled DNS Local' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns ;;
      "DNS OpenDNS") networksetup -setdnsservers "$INTERFACE" 208.67.222.222 208.67.220.220 ; "$POPUP" -title 'Enabled DNS OpenDNS' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns;;
      "DNS Google") networksetup -setdnsservers "$INTERFACE" 8.8.8.8 8.8.4.4 ; "$POPUP" -title 'Enabled DNS Google' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns ;;
      "Flush DNS Cache") osascript -e "do shell script \"`sudo killall -HUP mDNSResponder`\" with administrator privileges" ;;
      esac
}

function io_status {
  status_macaddress=$(cat "$CONF"MAC-FIX)
  status_public_ip=`dig +short myip.opendns.com @resolver1.opendns.com &`
  status_dnscrypt=$(cat "$CONF"dnscrypt)
  status_dnscrypt_update_base=$(cat "$CONF"dnscrypt_update)
  status_tor=$(cat "$CONF"tor)
  status_openvpn=$(cat "$CONF"openvpn)
  status_service=$(cat "$CONF"service)
  status_hostname=$(cat "$CONF"io_new_hostname)
  "$POPUP" -title 'Status services' -actions "MAC - $status_macaddress","Public IP - $status_public_ip","Hostname - $status_hostname","TOR - $status_tor","DNSCrypt - $status_dnscrypt","DNSCrypt Base - $status_dnscrypt_update_base","OpenVPN - $status_openvpn","Service - $status_service" -timeout 10 -appIcon "$APP"/Contents/Resources/ModelIcon.icns
}

function io_hostname {
  io_old_hostname=$(cat "$CONF"io_old_hostname)
  io_new_hostname=$(cat "$CONF"io_new_hostname)
  hostname > "$CONF"io_old_hostname
  "$POPUP" -reply -message "What is the name of this release ?" -title 'I/O Wireless Network Utility' > "$CONF"io_new_hostname
  exec 6<&0
  exec < "$CONF"io_new_hostname
  read a1
  osascript -e "do shell script \"`sudo -v`\" with administrator privileges" &&
  while true; do sudo -n true; sleep 60; kill -0 "$$" || exit; done 2>/dev/null &
  sudo scutil --set ComputerName "$io_new_hostname"
  sudo scutil --set HostName "$io_new_hostname"
  sudo scutil --set LocalHostName "$io_new_hostname"
  sudo defaults write /Library/Preferences/SystemConfiguration/com.apple.smb.server NetBIOSName -string "$io_new_hostname"
}

function new_window {
    TMP_FILE="tmp.command"
    echo "#!/usr/bin/env bash" > $TMP_FILE
    # Copy over environment (including functions), but filter out readonly stuff
    set | grep -v "\(BASH_VERSINFO\|EUID\|PPID\|SHELLOPTS\|UID\)" >> $TMP_FILE
    # Copy over exported envrionment
    export -p >> $TMP_FILE
    # Change to directory
    echo "cd $(pwd)" >> $TMP_FILE
    # Copy over target command line
    echo "$@" >> $TMP_FILE
    chmod +x "$TMP_FILE"
    open -b com.apple.terminal "$TMP_FILE"
    sleep 1 # Wait for terminal to start
    rm "$TMP_FILE"
}

function io_ping {
  "$POPUP" -reply -message "What is the name of this release ?" -title 'I/O Wireless Network Utility' > "$CONF"io_host
  exec 6<&0
  exec < "$CONF"io_host
  read a1
  new_window ping -c 3 "$a1"
}

function io_ping_flood {
  "$POPUP" -reply -message "What is the name of this release ?" -title 'I/O Wireless Network Utility' > "$CONF"io_host
  exec 6<&0
  exec < "$CONF"io_host
  read a1
  new_window sudo ping -f -s 56500 "$a1"
}

function io_traceroute {
  "$POPUP" -reply -message "What is the name of this release ?" -title 'I/O Wireless Network Utility' > "$CONF"io_host
  exec 6<&0
  exec < "$CONF"io_host
  read a1
  new_window traceroute "$a1"
}
function io_dig {
  "$POPUP" -reply -message "What is the name of this release ?" -title 'I/O Wireless Network Utility' > "$CONF"io_host
  exec 6<&0
  exec < "$CONF"io_host
  read a1
  new_window dig "$a1"
}

function io_nslookup {
  "$POPUP" -reply -message "What is the name of this release ?" -title 'I/O Wireless Network Utility' > "$CONF"io_host
  exec 6<&0
  exec < "$CONF"io_host
  read a1
  new_window nslookup "$a1"
}

function io_ssh_new_session {
  "$POPUP" -reply -message "What is the name of this release ?" -title 'I/O Wireless Network Utility' > "$CONF"io_ssh_new_session
  exec 6<&0
  exec < "$CONF"io_ssh_new_session
  read a1
  new_window ssh "$a1"
}

function io_whois {
  "$POPUP" -reply -message "What is the name of this release ?" -title 'I/O Wireless Network Utility' > "$CONF"io_host
  exec 6<&0
  exec < "$CONF"io_host
  read a1
  new_window whois "$a1"
}

function io_netstat {
  new_window netstat -i "$INTERFACE"
}

function io_tshark {
  mkdir -p ~/Desktop/dump
  tshark -D | grep USB | awk '{print $2}' > /tmp/device
  "$POPUP" -reply -message "Set captures size packet" -title 'I/O Wireless Network Utility' > "$CONF"io_captures_sise
  io_captures_sise=$(cat "$CONF"io_captures_sise)
  exec 6<&0
  exec < /tmp/device
  read a1
  tshark -i "$a1" -T pdml -c "$io_captures_sise" > ~/Desktop/dump/dump.xml
  tcpdump -i "$a1" -c "$io_captures_sise" -w ~/Desktop/dump/dump.pcap
  cp /usr/local/sbin/pdml2html.xsl ~/Desktop/dump/pdml2html.xsl ;
  open -a Safari ~/Desktop/dump/dump.xml
  rm -rf /tmp/device
}

function io_speedtest {
  "$POPUP" -title 'Speedtest starting' -subtitle "$CHECK_SERVICE" -message 'Please wait...' -timeout 3 -sound default -appIcon "$APP"/Contents/Resources/ModelIcon.icns
  /usr/local/sbin/speedtest.py  --share > "$CONF"io_speedtest
  download=$(cat "$CONF"io_speedtest | grep Download)
  upload=$(cat "$CONF"io_speedtest | grep Upload)
  share=$(cat "$CONF"io_speedtest | grep Share | awk '{print $3}')
  io_speedtest="$("$POPUP" -title "$download"  -message "$upload" -actions "$download","$upload","Share" -timeout 5 -sound default -appIcon "$APP"/Contents/Resources/ModelIcon.icns)"
    case $io_speedtest in
      "@TIMEOUT") echo "timeout" ;;
      "@CLOSED") echo "You clicked on the default alert' close button" ;;
      "@CONTENTCLICKED") open "$share" ;;
      "@ACTIONCLICKED") echo "share" ;; #echo "You clicked the alert default action button" ;;
      "Share") open "$share" ;;
    esac
}

function io_ssh_menu {
  io_ssh_menu="$("$POPUP" -title 'I/O Wireless Network Utility' -subtitle "$CHECK_SERVICE" -message 'Actions?' -actions "SSH host","Host0","Host1","Host2","Host3","Host4","Host5","Host6","Host7","Host8","Host9","Clean history" -timeout 15 -sound default -appIcon "$APP"/Contents/Resources/ModelIcon.icns)"
    case $io_ssh_menu in
    "SSH host") io_ssh_new_session ;;
    "Host0") cat "$CONF"io_ssh_list | head -1 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host1") cat "$CONF"io_ssh_list | head -2 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host2") cat "$CONF"io_ssh_list | head -3 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host3") cat "$CONF"io_ssh_list | head -4 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host4") cat "$CONF"io_ssh_list | head -5 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host5") cat "$CONF"io_ssh_list | head -6 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host6") cat "$CONF"io_ssh_list | head -7 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host7") cat "$CONF"io_ssh_list | head -8 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host8") cat "$CONF"io_ssh_list | head -9 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host9") cat "$CONF"io_ssh_list | head -10 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Clean history") echo "" > "$CONF"io_ssh_list ;;
  esac
}

function io_telnet {
  "$POPUP" -reply -message "What is the name of this release ?" -title 'I/O Wireless Network Utility' > "$CONF"io_host
  exec 6<&0
  exec < "$CONF"io_host
  read a1
  new_window telnet "$a1"
}

function io_utility {
  io_utility_case="$("$POPUP" -title 'I/O Wireless Network Utility' -subtitle "$CHECK_SERVICE" -message 'Actions?' -actions "Set Hostname","Open Terminal","Ping","Ping FLOOD!!!","TShark","Speedtest","Traceroute","Nslookup","Dig","Whois","SSH","Telnet" -timeout 15 -sound default -appIcon "$APP"/Contents/Resources/ModelIcon.icns)"
      case $io_utility_case in
      "@TIMEOUT") echo "timeout" ;;
      "@CLOSED") echo "You clicked on the default alert' close button" ;;
      "@CONTENTCLICKED") echo "You clicked the alert's content !" ;;
      "@ACTIONCLICKED") echo "You clicked the alert default action button" ;;
      "Set Hostname") io_hostname ;;
      "Open Terminal") `open -a Terminal /` ;;
      "Ping") io_ping ;;
      "Ping FLOOD!!!") io_ping_flood ;;
      "TShark") io_tshark ;;
      "Speedtest") io_speedtest ;;
      "Traceroute") io_traceroute ;;
      "Nslookup") io_nslookup ;;
      "Dig") io_dig ;;
      "Whois") io_whois ;;
      "Telnet") io_telnet ;;
      "SSH") io_ssh_menu ;;
      esac
}

StatusBarApp_POPUP="$("$POPUP" -title 'I/O Wireless Network Utility' -subtitle "$CHECK_SERVICE" -message 'Actions?' -actions "Switch Wi-Fi","Switch TOR","Switch DNSCrypt","Switch OpenVPN","Switch Service","Switch SSH Server","Dark/Light mode","Fix Device","Show/Hide Bar Menu","Switch DNS","Status","Utility" -timeout 15 -sound default -appIcon "$APP"/Contents/Resources/ModelIcon.icns)"
  case $StatusBarApp_POPUP in
    "@TIMEOUT") echo "timeout" ;;
    "@CLOSED") echo "You clicked on the default alert' close button" ;;
    "@CONTENTCLICKED") echo "You clicked the alert's content !" ;;
    "@ACTIONCLICKED") echo "You clicked the alert default action button" ;;
		"Switch Wi-Fi") switch_wifi ;;
    "Switch TOR") switch_tor ;;
    "Switch DNSCrypt") switch_dnscrypt ;;
    "Switch Service") switch_service ;;
    "Switch OpenVPN") switch_openvpn ;;
    "Switch SSH Server") switch_ssh_server ;;
    "Dark/Light mode") cd "$SET_MODE" ; switch_mode ;;
    "Fix Device") grep -rl "0" "$CONF"*rfoff.rtl > "$CONF"MAC ; cat "$CONF"MAC | cut -c 60-71 > "$CONF"DEVICE ; "$POPUP" -title 'The device is fixed' -message '' -timeout 3 -appIcon "$APP"/Contents/Resources/ModelIcon.icns ;;
    "Switch DNS") switch_dns ;;
    "Switch Service") "$POPUP" -title 'Status services' -actions "DHCP $Switch_DNS_CASE" -timeout 10 -appIcon "$APP"/Contents/Resources/ModelIcon.icns ;;
    "Show/Hide Bar Menu") switch_utility ;;
    "Status") io_status ;;
    "Utility") io_utility ;;
    **) echo "? --> $StatusBarApp_POPUP" ;;
  esac
