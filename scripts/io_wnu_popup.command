#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

APP=/Library/Application\ Support/WLAN/StatusBarApp.app/
MAC=/Library/Application\ Support/WLAN/com.realtek.utility.wifi/
CONF="$APP"Contents/conf/
POPUP="$APP"Contents/sbin/io_wnu_popup
SBIN="$APP"Contents/sbin/
SET_MODE="$APP"Contents/
SERVICE=`launchctl list | grep io_wnu | awk '{print $2}'`
SLE=/System/Library/Extensions/
ACTIVE_DEVICE=`awk '{print $1}' "$MAC"*rfoff.rtl`
CHECK_SERVICE=$(cat "$CONF"check_service)

function io_check_update {

GITHUB='https://raw.githubusercontent.com/envieid0c/io_wnu/master/scripts/io_wnu_popup.command'
APPVER="v0.0.3"
SELF_UPDATE_OPT="NO"
MODE="S"
BUILDER=$USER # don't touch!

IsNumericOnly() {
    if [[ "${1}" =~ ^-?[0-9]+$ ]]; then
        return 0 # no, contains other or is empty
    else
        return 1 # yes is an integer (no matter for bash if there are zeroes at the beginning comparing it as integer)
    fi
}

pressAnyKey(){
    clear
    printf "${1}\n"
    read -rsp $'Press any key to continue...\n' -n1 key
    clear
}

selfUpdate() {
    local SELF_PATH="${0}"
    local cmd=""
    local newScriptRev=""
    local currScriptRev=$(echo $APPVER | tr -cd [:digit:]) # in case of beta suffix
    local newScript=""

    case $1 in
    wget)
        cmd='$1 $GITHUB -q -O -'
    ;;
    curl)
        cmd='$1 -L $GITHUB'
    ;;
    *)
        printError "selfUpdate(): invalid cmd!\n"
        return
    ;;
    esac

    newScript=$(eval $cmd)

    # don't fail if no script is avail
    if [ -n "${newScript}" ]; then
        echo "${newScript}" > /tmp/io_wnu_popup.txt
        newScript=$(cat /tmp/io_wnu_popup.txt)
        newScriptRev=$(cat /tmp/io_wnu_popup.txt | grep 'APPVER=' | tr -cd [:digit:])

        if IsNumericOnly $currScriptRev && IsNumericOnly $newScriptRev; then
            if [ "$newScriptRev" -gt "$currScriptRev" ]; then
                # we have a new script, prompt the user
                printf "\na new io_wnu_popup.command is available,\n"
                echo "do you want to overwrite the script? (Y/n)\n"
                read answer

                case $answer in
                Y | y)
                    # get the line containing MODE variable and replace with what is currently in old script:
                    local lineVarNum=$(cat /tmp/io_wnu_popup.txt | grep -n '^MODE="' | awk -F ":" '{print $1}')

                    if [[ "$MODE" == "R" ]]; then
                        if IsNumericOnly $lineVarNum; then
                            if [[ "$SYSNAME" == Linux ]]; then
                                sed -i "${lineVarNum}s/.*/MODE=\"R\"/" /tmp/io_wnu_popup.txt
                            else
                                sed -i "" "${lineVarNum}s/.*/MODE=\"R\"/" /tmp/io_wnu_popup.txt
                            fi
                            cat /tmp/io_wnu_popup.txt > "${SELF_PATH}"
                            echo "done!"
                            rm -f /tmp/io_wnu_popup.txt
                            exec "${SELF_PATH}"
                        else
                            cat /tmp/io_wnu_popup.txt > "${SELF_PATH}"
                            echo "Warning: was not possible to ensure that MODE var was correctly set,"
                            echo "so apply your changes (if any) and re run the new script"
                            rm -f /tmp/io_wnu_popup.txt
                            exit 0
                        fi
                    else
                        cat /tmp/io_wnu_popup.txt > "${SELF_PATH}"
                        echo "done!"
                        rm -f /tmp/io_wnu_popup.txt
                        exec "${SELF_PATH}"
                    fi
                ;;
                esac
            else
                pressAnyKey 'your script is up to date,\n'
            fi
        fi
    else
        pressAnyKey 'was not possible to retrieve updates for io_wnu_popup.command,'
    fi
    #rm -f /tmp/io_wnu_popup.txt
}

# <----------------------------
# functions
# --------------------------------------
# usefull before/after creating an array
# with custom separator
restoreIFS() {
    IFS=$' \t\n';
}
# --------------------------------------
printHeader() {
    printf "\033[1;34m${1}\033[0m\n"
}
# --------------------------------------
printError() {
    printf "\033[1;31m${1}\033[0m"
#    exit 1
}
# --------------------------------------
printWarning() {
    printf "\033[1;33m${1}\033[0m"
}
# --------------------------------------
# don't use sudo!
if [[ $EUID -eq 0 ]]; then
    printError "\nThis script should not be run using sudo!!\n"
    exit 1
fi
# --------------------------------------
printiownuScriptRev() {
    local LVALUE
    local RVALUE
    local SVERSION
    local RAPPVER

    if ping -c 1 github.com >> /dev/null 2>&1; then
        # Retrive and filter remote script version
        RAPPVER='v'$(curl -v --silent $GITHUB 2>&1 | grep '^APPVER="v' | tr -cd '.0-9')

        LVALUE=$(echo $APPVER | tr -cd [:digit:])
        RVALUE=$(echo $RAPPVER | tr -cd [:digit:])

        # Compare local and remote script version
        if [ $LVALUE -eq $RVALUE ]; then
            SELF_UPDATE_OPT="NO"
            SVERSION="\033[1;32m${2}${APPVER}\033[0m\040 is the latest version avaiable"
        elif [ $LVALUE -gt $RVALUE ]; then
            SELF_UPDATE_OPT="NO"
            SVERSION="${APPVER} (wow, you coming from the future?)"
        else
            SELF_UPDATE_OPT="YES"
            SVERSION="${APPVER} a new version $RAPPVER is available for download"
        fi
    else
        printError "IO_WNU script ${APPVER}\n(remote version unavailable because\ngithub is unreachable, check your internet connection)\n"
    fi
    printHeader "IO_WNU script $SVERSION"
}
# --------------------------------------
donwloader(){
    #$1 link
    #$2 file name
    #$3 path (where will be saved)
    local cmd=""
    local downloadlink=""
    local suggestedFilename=""
    local downloadLocation=""

    if [ -z "${1}" ]; then printError "\nError: donwloader() require 3 argument!!\n" && exit 1; fi
    if [ -z "${2}" ]; then
        printError "\nError: donwloader() require a suggested file name\n" && exit 1
    fi
    if [ -z "${3}" ] || [[ ! -d "${3}" ]]; then printError "\nError: donwloader() require the download path!!\n" && exit 1; fi

    downloadlink="${1}"
    suggestedFilename="${2}"
    downloadLocation="${3}"

    if [[ -x $(which wget) ]]; then
        cmd="wget -O ${downloadLocation}/${suggestedFilename} ${downloadlink}"
    elif [[ -x $(which curl) ]]; then
        cmd="curl -o ${downloadLocation}/${suggestedFilename} -LOk ${downloadlink}"
    else
        printError "\nNo curl nor wget are installed! Install one of them and retry..\n" && exit 1
    fi

    # default behavior = replace existing download!
    if [[ -d "${downloadLocation}/${suggestedFilename}" ]]; then
        rm -rf "${downloadLocation}/${suggestedFilename}"
    fi

    eval "${cmd}"
}

}

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
  exec < "$CONF"/MAC
  read a1
  if [ "$ACTIVE_DEVICE" != "1" ]; then
    osascript -e 'quit app "StatusBarApp"'
    echo "1" > "$a1"
    "$POPUP" -title 'Wi-Fi disabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
    open -a "$APP"
  else
    osascript -e 'quit app "StatusBarApp"'
    echo "0" > "$a1"
    "$POPUP" -title 'Wi-Fi enabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
    open -a "$APP"
  fi
}

function switch_tor {
  unit=$(cat "$CONF"tor)

  if [ "$unit" != "Enabled" ]; then
    echo Enabled > "$CONF"tor
    networksetup -setsocksfirewallproxy "$INTERFACE" 127.0.0.1 9050 off ; "$SBIN"/tor -f "$CONF"torrc.sample & sleep 3 ; open https://check.torproject.org ; "$POPUP" -title 'TOR enabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  else
    echo Disabled > "$CONF"tor
    killall -9 tor ; networksetup -setsocksfirewallproxystate "$INTERFACE" off ; sleep 3 ; "$POPUP" -title 'TOR disabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  fi
}

function test_dns {
  if [ "nslookup -type=txt debug.opendns.com | grep 127.0.0.1 | awk '{print "127.0.0.1"}' | tail -n1" != '127.0.0.1' ]; then
    "$POPUP" -title 'DNSCrypt enabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  else
    "$POPUP" -title 'DNSCrypt not enabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  fi
}


function switch_dnscrypt {
  unit=$(cat "$CONF"dnscrypt)
  if [ "$unit" != "Enabled" ]; then
    echo Enabled > "$CONF"dnscrypt
    networksetup -setdnsservers "$INTERFACE" 127.0.0.1 ; osascript -e "do shell script \"`sudo "$SBIN"/dnscrypt-proxy "$SBIN"/dnscrypt-proxy.toml`\" with administrator privileges" & sleep 2 & test_dns
  else
    echo Disabled > "$CONF"dnscrypt
    osascript -e "do shell script \"`sudo killall -9 dnscrypt-proxy`\" with administrator privileges" ; networksetup -setdnsservers "$INTERFACE" Empty ; "$POPUP" -title 'DNSCrypt disabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
    rm -rf /tmp/dnscrypt-proxy
  fi
}

function switch_openvpn {
  unit=$(cat "$CONF"openvpn)

  if [ "$unit" != "Enabled" ]; then
    echo Enabled > "$CONF"openvpn
    osascript -e "do shell script \"`sudo "$SBIN"/openvpn --config ~/config.ovpn`\" with administrator privileges" & sleep 3 ; "$POPUP" -title 'OpenVPN enabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  else
    echo Disabled > "$CONF"openvpn
    osascript -e "do shell script \"`sudo killall -9 openvpn`\" with administrator privileges" ; "$POPUP" -title 'OpenVPN disabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  fi
}

function switch_utility {
  unit=$(cat "$CONF"utility)

  if [ "$unit" != "Enabled" ]; then
    echo Enabled > "$CONF"utility
    osascript -e 'open app "StatusBarApp"' & "$POPUP" -title 'Shown Utility' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  else
    echo Disabled > "$CONF"utility
    osascript -e 'quit app "StatusBarApp"' & "$POPUP" -title 'Hidden Utility' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  fi
}

function switch_service {
  launchctl list | grep wnu | awk '{print $2}' > "$CONF"service_status

  exec 6<&0
  exec < "$CONF"service_status
  read a1

  if [ "$a1" != "0" ]; then
    launchctl load /Library/LaunchAgents/io_wnu.plist
    "$POPUP" -title ' Service enabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
    echo "Service Enabled" > "$CONF"check_service
    echo "Enabled" > "$CONF"service
    echo "0" > "$CONF"service_status
  else
    launchctl unload /Library/LaunchAgents/io_wnu.plist
    "$POPUP" -title ' Service disabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
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
    "$POPUP" -title 'SSH Service enabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  else
    echo Disabled > "$CONF"io_ssh_server
    osascript -e "do shell script \"`sudo systemsetup -f -setremotelogin off`\" with administrator privileges"
    "$POPUP" -title 'SSH Service disabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  fi
}

function switch_mode {
  CHECK=`ls -al | sed -n '9p' | awk '{print $11}'`
  if [ "$CHECK" != "Dark" ]; then
	   rm -rf Resources
     ln -s Dark Resources
     osascript -e 'quit app "StatusBarApp"'
     open -a "$APP"
     "$POPUP" -title 'Dark Mode' -message '' -timeout 2 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  else
    rm -rf Resources
    ln -s Light Resources
    osascript -e 'quit app "StatusBarApp"'
    open -a "$APP"
    "$POPUP" -title 'Light Mode' -message '' -timeout 2 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  fi
}

function switch_dns {
  Switch_DNS_CASE="$("$POPUP" -title 'I/O Wireless Network Utility' -subtitle "$CHECK_SERVICE" -message 'Actions?' -actions "DNS DHCP","DNS Local","DNS Google","DNS OpenDNS","Flush DNS Cache" -timeout 15 -sound default -appIcon "$APP"Contents/Resources/ModelIcon.icns)"
      case $Switch_DNS_CASE in
      "@TIMEOUT") echo "timeout" ;;
      "@CLOSED") echo "You clicked on the default alert' close button" ;;
      "@CONTENTCLICKED") echo "You clicked the alert's content !" ;;
      "@ACTIONCLICKED") echo "You clicked the alert default action button" ;;
      "DNS DHCP") networksetup -setdnsservers "$INTERFACE" Empty ; "$POPUP" -title 'Enabled DNS DHCP' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns ;;
      "DNS Local") networksetup -setdnsservers "$INTERFACE" 127.0.0.1 ; "$POPUP" -title 'Enabled DNS Local' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns ;;
      "DNS OpenDNS") networksetup -setdnsservers "$INTERFACE" 208.67.222.222 208.67.220.220 ; "$POPUP" -title 'Enabled DNS OpenDNS' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns;;
      "DNS Google") networksetup -setdnsservers "$INTERFACE" 8.8.8.8 8.8.4.4 ; "$POPUP" -title 'Enabled DNS Google' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns ;;
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
  "$POPUP" -title 'Status services' -actions "MAC - $status_macaddress","Public IP - $status_public_ip","Hostname - $status_hostname","TOR - $status_tor","DNSCrypt - $status_dnscrypt","DNSCrypt Base - $status_dnscrypt_update_base","OpenVPN - $status_openvpn","Service - $status_service" -timeout 10 -appIcon "$APP"Contents/Resources/ModelIcon.icns
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
    TMP_FILE="/tmp/tmp.command"
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
    #rm "$TMP_FILE"
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
  cp "$SBIN"/pdml2html.xsl ~/Desktop/dump/pdml2html.xsl ;
  open -a Safari ~/Desktop/dump/dump.xml
  rm -rf /tmp/device
}

function io_speedtest {
  "$POPUP" -title 'Speedtest starting' -subtitle "$CHECK_SERVICE" -message 'Please wait...' -timeout 3 -sound default -appIcon "$APP"Contents/Resources/ModelIcon.icns
  "$SBIN"/speedtest.py  --share > "$CONF"io_speedtest
  download=$(cat "$CONF"io_speedtest | grep Download)
  upload=$(cat "$CONF"io_speedtest | grep Upload)
  share=$(cat "$CONF"io_speedtest | grep Share | awk '{print $3}')
  io_speedtest="$("$POPUP" -title "$download"  -message "$upload" -actions "$download","$upload","Share" -timeout 5 -sound default -appIcon "$APP"Contents/Resources/ModelIcon.icns)"
    case $io_speedtest in
      "@TIMEOUT") echo "timeout" ;;
      "@CLOSED") echo "You clicked on the default alert' close button" ;;
      "@CONTENTCLICKED") open "$share" ;;
      "@ACTIONCLICKED") echo "share" ;; #echo "You clicked the alert default action button" ;;
      "Share") open "$share" ;;
    esac
}

function io_ssh_menu {
  io_ssh_menu="$("$POPUP" -title 'I/O Wireless Network Utility' -subtitle "$CHECK_SERVICE" -message 'Actions?' -actions "SSH host","Host 0","Host 1","Host 2","Host 3","Host 4","Host 5","Host 6","Host 7","Host 8","Host 9","Clean history" -timeout 15 -sound default -appIcon "$APP"Contents/Resources/ModelIcon.icns)"
    case $io_ssh_menu in
    "SSH host") io_ssh_new_session ;;
    "Host 0") cat "$CONF"io_ssh_list | head -1 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host 1") cat "$CONF"io_ssh_list | head -2 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host 2") cat "$CONF"io_ssh_list | head -3 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host 3") cat "$CONF"io_ssh_list | head -4 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host 4") cat "$CONF"io_ssh_list | head -5 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host 5") cat "$CONF"io_ssh_list | head -6 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host 6") cat "$CONF"io_ssh_list | head -7 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host 7") cat "$CONF"io_ssh_list | head -8 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host 8") cat "$CONF"io_ssh_list | head -9 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
    "Host 9") cat "$CONF"io_ssh_list | head -10 | tail -1 > "$CONF"io_ssh_active ; exec 6<&0 ; exec < "$CONF"io_ssh_active ; read a1 ; new_window ssh "$a1" ;;
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
  io_utility_case="$("$POPUP" -title 'I/O Wireless Network Utility' -subtitle "$CHECK_SERVICE" -message 'Actions?' -actions "Set Hostname","Open Terminal","Ping","Ping FLOOD!!!","TShark","Speedtest","Traceroute","Nslookup","Dig","Whois","SSH","Telnet" -timeout 15 -sound default -appIcon "$APP"Contents/Resources/ModelIcon.icns)"
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

function io_reload {
	osascript -e "do shell script \"`sudo -v`\" with administrator privileges" &&
	while true; do sudo -n true; sleep 60; kill -0 "$$" || exit; done 2>/dev/null &
	sudo kextload $SLE/RtWlanU.kext
	sudo kextload $SLE/RtWlanU1827.kext
	sudo killall -9 StatusBarApp
	launchctl load -w -F /Library/LaunchAgents/io_wnu.plist
}

StatusBarApp_POPUP="$("$POPUP" -title 'I/O Wireless Network Utility' -subtitle "$CHECK_SERVICE" -message 'Actions?' -actions "Switch Wi-Fi","Switch TOR","Switch DNSCrypt","Switch OpenVPN","Switch Service","Switch SSH Server","Dark/Light mode","Fix Device","Show/Hide Bar Menu","Switch DNS","Status","Reload Kext/Service","Utility","Check Update" -timeout 15 -sound default -appIcon "$APP"Contents/Resources/ModelIcon.icns)"
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
    "Fix Device") grep -rl "0" "$MAC"*rfoff.rtl > "$CONF"MAC ; cat "$CONF"MAC | cut -c 60-71 > "$CONF"DEVICE ; "$POPUP" -title 'The device is fixed' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns ;;
    "Switch DNS") switch_dns ;;
    "Switch Service") "$POPUP" -title 'Status services' -actions "DHCP $Switch_DNS_CASE" -timeout 10 -appIcon "$APP"Contents/Resources/ModelIcon.icns ;;
    "Show/Hide Bar Menu") switch_utility ;;
    "Status") io_status ;;
    "Utility") io_utility ;;
    "Check Update") io_check_update ;;
    "Reload Kext/Service") io_reload ; "$POPUP" -title 'The Kext and Service reloader' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns ;;
    **) echo "? --> $StatusBarApp_POPUP" ;;
  esac
