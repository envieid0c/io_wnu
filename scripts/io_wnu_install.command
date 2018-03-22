#!/bin/bash
# Copyright © 2018 Fedor Mankov envieid0c (envieidoc@gmail.com)

printf '\e[8;34;90t'

APP=/Library/Application\ Support/WLAN/StatusBarApp.app/
MAC=/Library/Application\ Support/WLAN/com.realtek.utility.wifi/
CONF="$APP"Contents/conf/
CONTENT="$APP"Contents/
HOSTS="$APP"Contents/hosts/
GITHUB='https://raw.githubusercontent.com/envieid0c/io_wnu/master/scripts/io_wnu_install.command'
ROOT_PATH=$(cd $(dirname $0) && pwd);
SBIN="$APP"Contents/sbin/
SCRIPTVER="v0.0.7"
SELF_UPDATE_OPT="NO"
SLE=/System/Library/Extensions/
MODE="S"
SOFT="$CONTENT/soft/"
ZSTD="$CONTENT/soft/zstd"

BUILDER=$USER # don't touch!

cd $ROOT_PATH;

IsNumericOnly() {
    if [[ "${1}" =~ ^-?[0-9]+$ ]]; then
        return 0 # no, contains other or is empty
    else
        return 1 # yes is an integer (no matter for bash if there are zeroes at the beginning comparing it as integer)
    fi
}

pressAnyKey(){
    if [[ "${2}" != noclear ]]; then
        clear
    fi
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
        echo "${newScript}" > /tmp/io_wnu_install.txt
        newScript=$(cat /tmp/io_wnu_install.txt)
        newScriptRev=$(cat /tmp/io_wnu_install.txt | grep 'SCRIPTVER=' | tr -cd [:digit:])

        if IsNumericOnly $currScriptRev && IsNumericOnly $newScriptRev; then
            if [ "$newScriptRev" -gt "$currScriptRev" ]; then
                # we have a new script, prompt the user
                printf "\na new io_wnu_install.command is available,\n"
                echo "do you want to overwrite the script? (Y/n)\n"
                read answer

                case $answer in
                Y | y)
                    # get the line containing MODE variable and replace with what is currently in old script:
                    local lineVarNum=$(cat /tmp/io_wnu_install.txt | grep -n '^MODE="' | awk -F ":" '{print $1}')

                    if [[ "$MODE" == "R" ]]; then
                        if IsNumericOnly $lineVarNum; then
                            if [[ "$SYSNAME" == Linux ]]; then
                                sed -i "${lineVarNum}s/.*/MODE=\"R\"/" /tmp/io_wnu_install.txt
                            else
                                sed -i "" "${lineVarNum}s/.*/MODE=\"R\"/" /tmp/io_wnu_install.txt
                            fi
                            cat /tmp/io_wnu_install.txt > "${SELF_PATH}"
                            echo "done!"
                            rm -f /tmp/io_wnu_install.txt
                            exec "${SELF_PATH}"
                        else
                            cat /tmp/io_wnu_install.txt > "${SELF_PATH}"
                            echo "Warning: was not possible to ensure that MODE var was correctly set,"
                            echo "so apply your changes (if any) and re run the new script"
                            rm -f /tmp/io_wnu_install.txt
                            exit 0
                        fi
                    else
                        cat /tmp/io_wnu_install.txt > "${SELF_PATH}"
                        echo "done!"
                        rm -f /tmp/io_wnu_install.txt
                        exec "${SELF_PATH}"
                    fi
                ;;
                esac
            else
                pressAnyKey 'your script is up to date,\n'
            fi
        fi
    else
        pressAnyKey 'was not possible to retrieve updates for io_wnu_install.command,'
    fi
    rm -f /tmp/io_wnu_install.txt
}

# <----------------------------
# Separators lines
ThickLine='=========================================================================================='
Line='                          <---------------------------------------------------------------'
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
clear
# print local Script revision with relative info
printiownuScriptRev
printHeader "By Micky1979 based on Slice"

function io_startup() {
# acquire sudo at the beginning
sudo -v
# Keep-alive: update existing `sudo` time stamp until `.osx` has finished
while true; do sudo -n true; sleep 60; kill -0 "$$" || exit; done 2>/dev/null &
}

io_uninstall() {

    kill_item() {
        process_name="$1"
        #echo "\n[kill_item]:: $process_name"
        pid=$(ps -A | grep "$process_name" |grep -v grep| awk '{print $1}')
        if [ "$pid" ]; then
            #echo "\tkillall::$process_name"
            sudo killall -c "$process_name"
        fi
    }

    remove_file() {
        file_name="$1"
        #echo "\n[remove_file]:: $file_name"
        if [ -e "$file_name" ]; then
            #echo "\trm::$file_name"
            sudo rm -rf "$file_name"
        fi
    }

    remove_directory() {
        dir_name="$1"
        #echo "\n[remove_directory]:: $dir_name"
        if [ -d "$dir_name" ]; then
            #echo "\trm_dir::$dir_name"
            sudo rm -rf "$dir_name"
        fi
    }

    unload_driver() {
        kext_name="$1"
        bundle_id=com.realtek.driver.$1
        #echo "\n[unload_driver]:: $bundle_id"

        index=$(kextstat -b $bundle_id |grep $bundle_id | awk '{print $1}')
        if [ "$index" ]; then
        #echo "\tkextunload::$kext_name"
        #sudo kextunload -c "$kext_name"

        if [ -e "/System/Library/Extensions/$kext_name.kext" ]; then
            sudo kextunload "/System/Library/Extensions/$kext_name.kext"
            sleep 2
        fi

        if [ -e "/Library/Extensions/$kext_name.kext" ]; then
            sudo kextunload "/Library/Extensions/$kext_name.kext"
            sleep 2
        fi

        fi
    }

    remove_wildcard_file() {
        wildcard_file=$1
        #echo "\n[remove_wildcard_file]:: $wildcard_file"
        for efile in $wildcard_file ; do
        #echo "\tefile: $efile"
        sudo rm -rf "$efile"
        done
    }

    small_clean() {
        echo "Remove App's & Kext's..." 
        sudo launchctl unload /Library/LaunchAgents/io_wnu.plist 2>/dev/null 
        sudo launchctl unload /Library/LaunchAgents/io.wnu.hosts.update.plist 2>/dev/null 
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
    }

    mydir="$(dirname "$BASH_SOURCE")"
    if [ "$mydir" == "/tmp" ]; then
        echo  "\n\n\033[41;37m Uninstall Wireless Network Utility ? ... [Y/y]:Yes\033[0m"
        read result
        if [ "$result" == "" ]; then
            exit
        fi

        if [ "$result" != "Y" ] && [ "$result" != "y" ]; then
            exit
        fi

    else
        echo "\nPlease type the password of \"root\" to Uninstall"
    fi

    FROM=`dirname "$0"`

    echo "\nPhase1: Terminate Utility"
    kill_item "Wireless-AC Network Utility"
    kill_item "Wireless Network Utility"
    kill_item "TP-LINK Wireless Configuration Utility"
    kill_item "BearExtender"
    kill_item "wpa_supplicant"
    kill_item "StatusBarApp"
    sleep 2

    echo "Phase2: System Information"

    UnPreference="/Library/Application Support/WLAN/StatusBarApp.app/Contents/MacOS/UnPref"
    if [ -e "$UnPreference" ]; then
        #sudo "$UnPreference" >> /tmp/2.txt
        sudo "$UnPreference"
    fi

    echo "Phase3: Remove Utility Related"

    # Wlan.Software / WlanAC104.Software / WlanAC.Software / Wlan104.Software
    remove_wildcard_file "/Library/LaunchAgents/Wlan*.Software"

    remove_file "/Library/LaunchAgents/WlanAC.plist"
    remove_file "/Library/LaunchAgents/Wlan.Software.plist"

    remove_wildcard_file "/Users/*/Library/Preferences/com.realtek.*"
    remove_wildcard_file "/Users/*/Library/Preferences/StatusBarApp.plist"
    remove_directory "/Library/Application Support/WLAN"
    
    # Legacy Utility
    remove_directory "/System/Library/CoreServices/StatusBarApp.app"
    remove_directory "/Applications/Wireless-AC Network Utility.app"
    remove_directory "/Applications/Wireless Network Utility.app"
    remove_directory "/Applications/TP-LINK Wireless Configuration Utility.app"
    remove_directory "/Applications/BearExtender.app"

    echo "Phase4: Remove Install Log"
    remove_wildcard_file "/private/var/db/receipts/com.realtek.*"
    remove_wildcard_file "/private/var/db/receipts/com.Wlan.*"
    remove_wildcard_file "/private/var/db/receipts/com.wlan.*"
    remove_wildcard_file "/private/var/db/receipts/com.Wireless*.*"
    remove_wildcard_file "/private/var/db/receipts/com.*Utility*.pkg.*"
    remove_wildcard_file "/private/var/db/receipts/com.*StatusBarApp.*"
    remove_wildcard_file "/private/var/db/receipts/com.*StartUp.pkg.*"
    remove_wildcard_file "/private/var/db/receipts/com.*Driver*.pkg.*"
    remove_wildcard_file "/private/var/db/receipts/com.UnPref.*"
    remove_wildcard_file "/private/var/db/receipts/com.BearExtender.*"
    remove_wildcard_file "/private/var/db/receipts/com.bearextenderturbo.*"

    echo "Phase5: Removing Driver"

    unload_driver "RtWlanU1827"
    unload_driver "RtWlanU"
    unload_driver "RtWlanDisk"
    unload_driver "RTL8812AU"
    unload_driver "RTL8192SU"
    unload_driver "RTL8192CU"
    unload_driver "RTL8188EU"
    unload_driver "RTL8192EU"
    unload_driver "RTL8192DU"
    unload_driver "RTL8723BU"

    #RtWlanU.kext / RtWlanU1827.kext / RtWlanU_192.kext / RtWlanDisk.kext
    remove_wildcard_file "/System/Library/Extensions/RtWlan*.kext"

    #RTL8192SU* / RTL8192CU* / RTL8192DU* / RTL8188EU* / 
    #RTL8192EU* / RTL8723BU* / RTL8812AU*
    remove_wildcard_file "/System/Library/Extensions/RTL8*.kext"

    #For BearExtender
    remove_wildcard_file "/Library/Extensions/RTL8812AU*.kext"


    version=$( /usr/bin/sw_vers -productVersion )
    major=$( awk -F'.' '{print $1}' <<< "${version}" )
    minor=$( awk -F'.' '{print $2}' <<< "${version}" )
    patch=$( awk -F'.' '{print $3}' <<< "${version}" )

    #echo major =$major
    #echo minor =$minor
    #echo patch =$patch

    if [ "$major" -eq 10 ]; then
        #echo major =$major
    
        #if [ "$minor" -eq 6 ]; then
        #   echo 10.6 =$minor
        #   #sudo kextcache -v 1 -a i386 -a x86_64 -m /System/Library/Caches/com.apple.kext.caches/Startup/Extensions.mkext /System/Library/Extensions
        #   sudo touch /System/Library/Extensions
        #   sudo kextcache -i /
        #elif [ "$minor" -ge 7 ] && [ "$minor" -le 10 ]; then
        #   echo 10.7~10.10 =$minor
        #   #sudo kextcache -system-prelinked-kernel
        #   #sudo kextcache -system-caches
        #   sudo touch /System/Library/Extensions
        #
        #elif [ "$minor" -ge 11 ]; then
        #   echo 10.12~ =$minor
        if [ "$minor" -ge 12 ]; then
        #   echo 10.12~ =$minor
            sudo touch /System/Library/Extensions
        #   sudo kextcache -u
        fi
    fi

    echo "\nUninstall Complete."
}

io_drivers() {
    echo "Install drivers..."
    sudo installer -pkg ../bin/1013/Installer.pkg -target /
    sudo rm -rf /Library/LaunchAgents/Wlan.Software.plist
}

io_cache() {
    echo "Fix cache..."
    sudo touch /System/Library/Extensions 2>/dev/null
    sudo touch /Library/Extensions 2>/dev/null
    sudo kextcache -u / 2>/dev/null
}

io_replace_app() {
    echo "Replace App..."
    sudo rm -rf /Library/Application\ Support/WLAN/StatusBarApp.app/
    unzip ../bin/StatusBarApp_mod_AirPort.zip  -d /Library/Application\ Support/WLAN/ >/dev/null
    sudo rm -rf /Library/Application\ Support/WLAN/__MACOSX/
}

io_config() {
    echo "Install Config's..."
    mkdir -p /usr/local/sbin
    mkdir -p /usr/local/opt/libevent/lib/ 2>/dev/null
    mkdir -p /usr/local/opt/libsodium/lib/ 2>/dev/null
    mkdir -p /usr/local/opt/openssl/lib/
    mkdir -p /usr/local/Cellar/openssl/1.0.2n/lib/
    mkdir -p /Library/Application\ Support/WLAN/com.realtek.utility.wifi
    sudo cp io_wnu.plist /Library/LaunchAgents/
    cp ../alias/sbin/* "$SBIN"
    CP ../alias/soft/* "$SOFT"
    cp ../alias/lib/liblzo2* /usr/local/lib 2>/dev/null
    cp ../alias/lib/libevent* /usr/local/opt/libevent/lib/ 2>/dev/null
    cp ../alias/lib/libsodium* /usr/local/opt/libsodium/lib/ 2>/dev/null
    cp ../config.ovpn ~/
    cp ../conf/torrc.sample "$CONF"
    unzip -f ../bin/WNU_Switch.zip -d ~/Library/Services/ >/dev/null
    sudo rm -rf ~/Library/Services/__MACOSX/
}

io_permissions() {
    echo "Fix Permissions..."
    chmod +x /Library/Application\ Support/WLAN/StatusBarApp.app/Contents/bin/* 2>/dev/null
}

io_fix_mac() {
    echo "Fix MAC-address..."
#autofix disabled wifi (testen on 1 device)
    rm -rf "$MAC"*rfoff.rtl
    osascript -e 'open app "StatusBarApp"' 2>/dev/null
    sleep 3
    grep -rl "0" "$MAC"*rfoff.rtl > "$CONF"MAC ; cat "$CONF"MAC | cut -c 60-71 > "$CONF"DEVICE
    echo "Disabled" > "$CONF"tor
    echo "Disabled" > "$CONF"dnscrypt
    echo ""         > "$CONF"dnscrypt_update
    echo "Disabled" > "$CONF"openvpn
    echo "Disabled" > "$CONF"io_ssh_server
    echo "Enabled"  > "$CONF"utility
    echo ""         > "$CONF"io_ssh
    echo ""         > "$CONF"io_new_hostname
    hostname        > "$CONF"io_old_hostname
}

io_start() {
    echo "Start App..."
    sudo kextload $SLE/RtWlanU.kext 2>/dev/null
    sudo kextload $SLE/RtWlanU1827.kext 2>/dev/null
    sudo killall -9 StatusBarApp 2>/dev/null
    launchctl load -w -F /Library/LaunchAgents/io_wnu.plist >/dev/null
}

io_update_hosts_full() {
    sudo rm -rf "$HOSTS" /Library/LaunchAgents/io.wnu.hosts.update.plist 

    mkdir -p "$"/log/
    cd "$CONTENT"
    git clone "https://github.com/envieid0c/hosts.git"
    cd "$HOSTS"
    git fetch --all
    git reset --hard origin/master
    sudo cp /etc/hosts /etc/hosts_orig

    sudo python updateHostsFile.py -a -r

    sudo cp "$HOSTS"io.wnu.hosts.update.plist /Library/LaunchAgents/
    sudo chmod 600 /Library/LaunchAgents/io.wnu.hosts.update.plist 
    sudo chown root /Library/LaunchAgents/io.wnu.hosts.update.plist
    sudo launchctl unload /Library/LaunchAgents/io.wnu.hosts.update.plist 2>/dev/null
    sudo launchctl load /Library/LaunchAgents/io.wnu.hosts.update.plist 2>/dev/null
}

io_update_hosts_db() {
    cd "$HOSTS"
    sudo python updateHostsFile.py -a -r
}

io_rever_hosts() {
    sudo rm /etc/hosts
    sudo cp /etc/hosts_orig /etc/hosts
    sudo killall -HUP mDNSResponder
}

showInfo () {
    clear
    printHeader "INFO"
    printf "This script was originally created to be run in newer OSes like El Capitan\n"
    printf "using Xcode 7.3 +, but should works fine using gcc 4,9 (GCC49)\n"
    printf "in older ones. Also gcc 5,3 can be used but not actually advised.\n"
    echo
    printf "Warning using the \"R\" mode of this script to create the src folder\n"
    printf "outside the Home folder:\n"
    printf "Blank spaces in the path are not allowed because it will auto-fail!\n"
    echo "${Line}"
    pressAnyKey '' noclear
    build
}

build() {
        echo 'Please enter your choice: '
        local options=()
        if [[ "$SELF_UPDATE_OPT" == YES ]]; then
            options+=("Update Script")
        fi

        if [[ "$BUILDER" == 'slice' ]]; then
            set +e
            options+=("Back to Main Menu")
        else
            options+=("Install ALL")
            options+=("Update hosts FULL")
            options+=("Update hosts DB")
            options+=("Rever hosts to original")
            options+=("Uninstall")
            options+=("info and limitations about this script")
            options+=("Exit")
        fi
        
        select opt in "${options[@]}"
        do
            case $opt in
            "Update Script")
                if [[ -x $(which wget) ]]; then
                    selfUpdate wget
                elif [[ -x $(which curl) ]]; then
                    selfUpdate curl
                else
                    printError "\nNo curl nor wget are installed! Install one of them and retry..\n" && exit 1
                fi
                build
            ;;
            "Install ALL")
				io_uninstall
                io_drivers
                io_cache
                io_replace_app
                io_config
                io_permissions
                io_fix_mac
                io_start
                #io_update_hosts_full
                printf "\033[1;31m ${count}) ${opt}\033[0m\n"
            ;;
            "Update hosts FULL")
                io_update_hosts_full
            ;;
            "Update hosts DB")
               io_update_hosts_db
            ;;
            "Rever hosts to original")
                io_rever_hosts
            ;;
            "Uninstall")
                io_uninstall
            ;;
            "info and limitations about this script")
                showInfo
            ;;
            "Back to Main Menu")
                build
            ;;
            "Exit")
                exit 0;
            ;;
            *)
                clear && echo "invalid option!!" && build
            ;;
            esac
        done
}     

build
#io_uninstall
#io_drivers
#io_cache
#io_replace_app
#io_config
#io_permissions
#io_fix_mac
#io_start
