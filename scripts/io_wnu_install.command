#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

printf '\e[8;34;90t'

APP=/Library/Application\ Support/WLAN/StatusBarApp.app/
CONF="$APP"Contents/conf/
GITHUB='https://raw.githubusercontent.com/envieid0c/io_wnu/master/scripts/io_wnu_install.command'
ROOT_PATH=$(cd $(dirname $0) && pwd);
SBIN="$APP"Contents/sbin/
SCRIPTVER="v0.0.3"
SELF_UPDATE_OPT="NO"
SLE=/System/Library/Extensions/
MODE="S"

cd $ROOT_PATH;

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
    local currScriptRev=$(echo $SCRIPTVER | tr -cd [:digit:]) # in case of beta suffix
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
        echo "${newScript}" > /tmp/io_wnu.txt
        newScript=$(cat /tmp/io_wnu.txt)
        newScriptRev=$(cat /tmp/io_wnu.txt | grep 'SCRIPTVER=' | tr -cd [:digit:])

        if IsNumericOnly $currScriptRev && IsNumericOnly $newScriptRev; then
            if [ "$newScriptRev" -gt "$currScriptRev" ]; then
                # we have a new script, prompt the user
                printf "\na new io_wnu.command is available,\n"
                echo "do you want to overwrite the script? (Y/n)\n"
                    # get the line containing MODE variable and replace with what is currently in old script:
                    local lineVarNum=$(cat /tmp/io_wnu.txt | grep -n '^MODE="' | awk -F ":" '{print $1}')
                        cat /tmp/io_wnu.txt > "${SELF_PATH}"
                        echo "done!"
                        rm -f /tmp/io_wnu.txt
                        exec "${SELF_PATH}"
            else
                pressAnyKey 'your script is up to date,\n'
            fi
        fi
    else
        pressAnyKey 'was not possible to retrieve updates for io_wnu.command,'
    fi
    echo "test"
    #rm -f /tmp/io_wnu.txt
}

# <----------------------------
# Separators lines
ThickLine='==============================================================================='
Line='                          <----------------------------------------------------'
# --------------------------------------
# functions
# --------------------------------------
# usefull before/after creating an array
# with custom separator
restoreIFS() {
    IFS=$' \t\n';
}
# --------------------------------------
printHeader() {
    echo "${ThickLine}"
    printf "\033[1;34m${1}\033[0m\n"
    echo "${Line}"
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
    echo
    printError "\nThis script should not be run using sudo!!\n"
    exit 1
fi
# --------------------------------------
printiownuScriptRev() {
    local LVALUE
    local RVALUE
    local SVERSION
    local RSCRIPTVER

    if ping -c 1 github.com >> /dev/null 2>&1; then
        # Retrive and filter remote script version
        RSCRIPTVER='v'$(curl -v --silent $GITHUB 2>&1 | grep '^SCRIPTVER="v' | tr -cd '.0-9')

        LVALUE=$(echo $SCRIPTVER | tr -cd [:digit:])
        RVALUE=$(echo $RSCRIPTVER | tr -cd [:digit:])

        # Compare local and remote script version
        if [ $LVALUE -eq $RVALUE ]; then
            SELF_UPDATE_OPT="NO"
            SVERSION="\033[1;32m${2}${SCRIPTVER}\033[0m\040 is the latest version avaiable"
        elif [ $LVALUE -gt $RVALUE ]; then
            SELF_UPDATE_OPT="NO"
            SVERSION="${SCRIPTVER} (wow, you coming from the future?)"
        else
            SELF_UPDATE_OPT="YES"
            SVERSION="${SCRIPTVER} a new version $RSCRIPTVER is available for download"
        fi
    else
        printError "IO_WNU script ${SCRIPTVER}\n(remote version unavailable because\ngithub is unreachable, check your internet connection)\n"
    fi
    printHeader "IO_WNU script $SVERSION"
}
# --------------------------------------
printCloverRev() {
    # get the revisions
    getRev "remote_local"

    # Remote
    if [ -z "${REMOTE_REV}" ]; then
        PING_RESPONSE="NO"
        REMOTE_REV="Something went wrong while getting the remote revision, check your internet connection!"
        printError "$REMOTE_REV"
        printf "\n"
        # Local
        if [ -z "${LOCAL_REV}" ]; then
            LOCAL_REV="Something went wrong while getting the local revision!"
            printError "$LOCAL_REV"
        else
            LOCAL_REV="${LOCAL_REV}"
            printWarning "${2}${LOCAL_REV}"
        fi
    else
        PING_RESPONSE="YES"
        REMOTE_REV="${REMOTE_REV}"
        printf "\033[1;32m${1}${REMOTE_REV}\033[0m\040"
        # Local
        if [ -z "${LOCAL_REV}" ]; then
            LOCAL_REV="\nSomething went wrong while getting the local revision!"
            printError "$LOCAL_REV"
        else
            LOCAL_REV="${LOCAL_REV}"
            if [ "${LOCAL_REV}" == "${REMOTE_REV}" ]; then
                printf "\033[1;32m${2}${LOCAL_REV}\033[0m\040"
            else
                printWarning "${2}${LOCAL_REV}"
            fi
        fi
    fi

    printf "\n"
    echo "${Line}"
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
# --------------------------------------
aptInstall() {
 
    if [[ -z "${1}" ]]; then 
        return
    fi
    printWarning "IO_WNU need this:\n"
    printError "${1}\n"
    printWarning "..to be installed, but was not found.\n"
    printWarning "would you allow to install it? (Y/N)\n"
    
    read answer

    case $answer in
    Y | y)
        if [[ "$USER" != root ]]; then echo "type your password to install:"; fi
        sudo apt-get update     
        sudo apt-get install "${1}"
    ;;
    *)
        printError "IO_WNU cannot go ahead without it/them, process aborted!\n"
        exit 1
    ;;
    esac
    sudo -k 
}
# --------------------------------------
clear
# print local Script revision with relative info
printiownuScriptRev
printHeader "By Micky1979 based on Slice, Zenith432, STLVNUB, JrCs, cecekpawon, Needy,\ncvad, Rehabman, philip_petev, ErmaC\n\nSupported OSes: macOS X, Ubuntu 16.04, Debian Jessie 8.6"

function io_startup() {
# acquire sudo at the beginning
sudo -v
# Keep-alive: update existing `sudo` time stamp until `.osx` has finished
while true; do sudo -n true; sleep 60; kill -0 "$$" || exit; done 2>/dev/null &
}

function io_stop() {
    echo "Remove App's & Kext's..."
    sudo launchctl unload /Library/LaunchAgents/io_wnu.plist 2>/dev/null
    sudo kextunload $SLE/RtWlanU.kext 2>/dev/null
    sudo kextunload $SLE/RtWlanU1827.kext 2>/dev/null
    sudo rm -rf $SLE/RtWlanU.kext
    sudo rm -rf $SLE/RtWlanU1827.kext
    launchctl unload /Library/LaunchAgents/io_wnu.plist
    osascript -e 'quit app "StatusBarApp"'
    sudo rm -rf /usr/local/opt/libevent/
    sudo rm -rf /usr/local/opt/libsodium/
    sudo rm -rf /usr/local/lib/liblzo2*
    sudo rm -rf /Library/Application\ Support/WLAN/StatusBarApp.app/
    sudo rm -rf /Library/Application\ Support/WLAN/__MACOSX/
    sudo rm -rf /Library/Application\ Support/WLAN/com.realtek.utility.wifi/
    sudo rm -rf ~/Library/Services/WNU\ Switch.workflow/
    # new fix
    echo "Remove UI..."
    sudo rm -rf /Library/LaunchAgents/io_wnu.plist
    sudo rm -rf /Library/LaunchAgents/WlanAC104.Software
    sudo rm -rf /Library/LaunchAgents/WlanAC.Software
    sudo rm -rf /Library/LaunchAgents/WlanAC.plist
    sudo rm -rf /Library/LaunchAgents/Wlan104.Software
    sudo rm -rf /Library/LaunchAgents/Wlan.Software
    sudo rm -rf /Library/LaunchAgents/Wlan.Software.plist

    sudo rm -rf /Applications/Wireless-AC\ Network\ Utility.app
    sudo rm -rf /Applications/Wireless\ Network\ Utility.app
    sudo rm -rf /System/Library/CoreServices/StatusBarApp.app
    sudo rm -rf /Library/Application\ Support/WLAN/*

    sudo rm -rf ~/Library/Preferences/com.realtek.utility.wifi.plist
    sudo rm -rf ~/Library/Preferences/com.realtek.utility.wifi11n.plist

    echo "Remove Driver..."
    sudo rm -rf /System/Library/Extensions/RtWlanU1827.kext
    sudo rm -rf /System/Library/Extensions/RtWlanU.kext
    sudo rm -rf /System/Library/Extensions/RtWlanU_192.kext
    sudo rm -rf /System/Library/Extensions/RTL8192SU*.kext
    sudo rm -rf /System/Library/Extensions/RTL8192CU*.kext
    sudo rm -rf /System/Library/Extensions/RTL8188EU*.kext
    sudo rm -rf /System/Library/Extensions/RTL8192EU*.kext
    sudo rm -rf /System/Library/Extensions/RTL8192DU*.kext
    sudo rm -rf /System/Library/Extensions/RtWlanU*.kext
    sudo rm -rf /System/Library/Extensions/RTL8812AU*.kext

    echo "Remove Pkg..."
    sudo rm -rf /Library/Receipts/wlan.pkg
    sudo rm -rf /Library/Receipts/wlanAc.pkg
    sudo rm -rf /Library/Receipts/rtl8192SU4.pkg
    sudo rm -rf /Library/Receipts/rtl8192CU4.pkg
    sudo rm -rf /Library/Receipts/rtl8188EU4.pkg
    sudo rm -rf /Library/Receipts/rtl8192EU4.pkg
    sudo rm -rf /Library/Receipts/rtl8192DU4.pkg
    sudo rm -rf /Library/Receipts/rtl8812AU4.pkg
    sudo rm -rf /Library/Receipts/wireless-acNetworkUtility.pkg
    sudo rm -rf /Library/Receipts/wirelessNetworkUtility.pkg
    
    # fix for remove config "yes" "no"
    #sudo cp /Library/Application\ Support/WLAN/StatusBarApp.app/Content/conf* ~/Desktop/backup/
    #sudo rm -rf /Library/Application\ Support/WLAN/com.realtek.utility.wifi/
    sudo killall -9 io_wnu 2>/dev/null
    # uninstall apps original
    sudo installer -pkg ../bin/1011/Uninstall.pkg -target /
}

function io_drivers() {
    echo "Install drivers..."
    sudo installer -pkg ../bin/1011/Installer.pkg -target /
    #sudo installer -pkg ../bin/1012/Installer.pkg -target /
    sudo rm -rf /Library/LaunchAgents/Wlan.Software.plist
}

function io_cache() {
    echo "Fix cache..."
    sudo touch /System/Library/Extensions 2>/dev/null
    sudo touch /Library/Extensions 2>/dev/null
    sudo kextcache -u / 2>/dev/null
}

function io_replace_app() {
    echo "Replace App..."
    sudo rm -rf /Library/Application\ Support/WLAN/StatusBarApp.app/
    unzip ../bin/StatusBarApp_mod_AirPort.zip  -d /Library/Application\ Support/WLAN/ >/dev/null
    sudo rm -rf /Library/Application\ Support/WLAN/__MACOSX/
}

function io_config() {
    echo "Install Config's..."
    mkdir -p /usr/local/sbin
    mkdir -p /usr/local/opt/libevent/lib/ 2>/dev/null
    mkdir -p /usr/local/opt/libsodium/lib/ 2>/dev/null
    mkdir -p /usr/local/opt/openssl/lib/
    mkdir -p /usr/local/Cellar/openssl/1.0.2i/lib/
    mkdir -p /Library/Application\ Support/WLAN/com.realtek.utility.wifi
    sudo cp io_wnu.plist /Library/LaunchAgents/
    cp ../alias/sbin/* "$APP"
    cp ../alias/lib/liblzo2* /usr/local/lib 2>/dev/null
    cp ../alias/lib/libevent* /usr/local/opt/libevent/lib/ 2>/dev/null
    cp ../alias/lib/libsodium* /usr/local/opt/libsodium/lib/ 2>/dev/null
    cp ../config.ovpn ~/
    cp ../conf/torrc.sample "$CONF"
    unzip ../bin/WNU_Switch.zip -d ~/Library/Services/ >/dev/null
    sudo rm -rf ~/Library/Services/__MACOSX/
}

function io_permissions() {
    echo "Fix Permissions..."
    chmod +x /Library/Application\ Support/WLAN/StatusBarApp.app/Contents/bin/* 2>/dev/null
}

function io_fix_mac() {
    echo "Fix MAC-address..."
#autofix disabled wifi (testen on 1 device)
    osascript -e 'open app "StatusBarApp"' 2>/dev/null
    sleep 3
    grep -rl "0" "$CONF"*rfoff.rtl > "$CONF"MAC ; cat "$CONF"MAC | cut -c 60-71 > "$CONF"DEVICE
    echo "Disabled" > "$CONF"tor
    echo "Disabled" > "$CONF"dnscrypt
    echo "Disabled" > "$CONF"openvpn
    echo "Disabled" > "$CONF"io_ssh_server
    echo "Enabled"  > "$CONF"utility
    echo ""         > "$CONF"io_ssh
}

function io_start() {
    echo "Start App..."
    sudo kextload $SLE/RtWlanU.kext 2>/dev/null
    sudo kextload $SLE/RtWlanU1827.kext 2>/dev/null
    sudo killall -9 StatusBarApp 2>/dev/null
    launchctl load -w -F /Library/LaunchAgents/io_wnu.plist 2>/dev/null
}

if [[ -x $(which wget) ]]; then
                    selfUpdate wget
                elif [[ -x $(which curl) ]]; then
                    selfUpdate curl
                else
                    printError "\nNo curl nor wget are installed! Install one of them and retry..\n" && exit 1
                fi
                    echo "OK"
#io_stop
#io_drivers
#io_cache
#io_replace_app
#io_config
#io_permissions
#io_fix_mac
#io_start
