#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

printf '\e[8;34;90t'

APP=/Library/Application\ Support/WLAN/StatusBarApp.app/
CONF="$APP"Contents/conf/
GITHUB='https://github.com/envieid0c/io_wnu/blob/master/scripts/io_wnu_install.command'
SBIN="$APP"Contents/sbin/
SCRIPTVER="v0.0.2"
SLE=/System/Library/Extensions/
ROOT_PATH=$(cd $(dirname $0) && pwd);
cd $ROOT_PATH;

selfUpdate() {
    printHeader "SELF UPDATE"
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
                read answer

                case $answer in
                Y | y)
                    # get the line containing MODE variable and replace with what is currently in old script:
                    local lineVarNum=$(cat /tmp/io_wnu.txt | grep -n '^MODE="' | awk -F ":" '{print $1}')

                    if [[ "$MODE" == "R" ]]; then
                        if IsNumericOnly $lineVarNum; then
                            if [[ "$SYSNAME" == Linux ]]; then
                                sed -i "${lineVarNum}s/.*/MODE=\"R\"/" /tmp/io_wnu.txt
                            else
                                sed -i "" "${lineVarNum}s/.*/MODE=\"R\"/" /tmp/io_wnu.txt
                            fi
                            cat /tmp/io_wnu.txt > "${SELF_PATH}"
                            echo "done!"
                            rm -f /tmp/io_wnu.txt
                            exec "${SELF_PATH}"
                        else
                            cat /tmp/io_wnu.txt > "${SELF_PATH}"
                            echo "Warning: was not possible to ensure that MODE var was correctly set,"
                            echo "so apply your changes (if any) and re run the new script"
                            rm -f /tmp/io_wnu.txt
                            exit 0
                        fi
                    else
                        cat /tmp/io_wnu.txt > "${SELF_PATH}"
                        echo "done!"
                        rm -f /tmp/io_wnu.txt
                        exec "${SELF_PATH}"
                    fi
                ;;
                esac
            else
                pressAnyKey 'your script is up to date,\n'
            fi
        fi
    else
        pressAnyKey 'was not possible to retrieve updates for io_wnu.command,'
    fi
    rm -f /tmp/io_wnu.txt
}

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
	echo "" 		> "$CONF"io_ssh
}

function io_start() {
	echo "Start App..."
	sudo kextload $SLE/RtWlanU.kext 2>/dev/null
	sudo kextload $SLE/RtWlanU1827.kext 2>/dev/null
	sudo killall -9 StatusBarApp 2>/dev/null
	launchctl load -w -F /Library/LaunchAgents/io_wnu.plist 2>/dev/null
}

io_stop
io_drivers
io_cache
io_replace_app
io_config
io_permissions
io_fix_mac
io_start
