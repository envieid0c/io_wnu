#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

APP=/Library/Application\ Support/WLAN/StatusBarApp.app/
CONF="$APP"Contents/conf/
SBIN="$APP"Contents/sbin/
SLE=/System/Library/Extensions/
ROOT_PATH=$(cd $(dirname $0) && pwd);
cd $ROOT_PATH;

function io_startup {
# acquire sudo at the beginning
sudo -v
# Keep-alive: update existing `sudo` time stamp until `.osx` has finished
while true; do sudo -n true; sleep 60; kill -0 "$$" || exit; done 2>/dev/null &
}

function io_stop {
	echo "Uninstalling App's & Kext's..."
	sudo launchctl unload /Library/LaunchAgents/io_wnu.plist
	sudo kextunload $SLE/RtWlanU.kext
	sudo kextunload $SLE/RtWlanU1827.kext
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
	echo "Uninstalling UI..."
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

	echo "Removing Driver..."
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

	echo "Removing Pkg"
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
	sudo killall -9 io_wnu
	# uninstall apps original
	sudo installer -pkg ../bin/1011/Uninstall.pkg -target /
}

function io_config {
	echo "Install Config's..."
	mkdir -p /usr/local/sbin
	mkdir -p /usr/local/opt/libevent/lib/
	mkdir -p /usr/local/opt/libsodium/lib/
	mkdir -p /usr/local/opt/openssl/lib/
	mkdir -p /usr/local/Cellar/openssl/1.0.2i/lib/
	mkdir -p /Library/Application\ Support/WLAN/com.realtek.utility.wifi
	sudo cp io_wnu.plist /Library/LaunchAgents/
	cp ../alias/sbin/* "$APP"
	cp ../alias/lib/liblzo2* /usr/local/lib
	cp ../alias/lib/libevent* /usr/local/opt/libevent/lib/
	cp ../alias/lib/libsodium* /usr/local/opt/libsodium/lib/
	cp ../config.ovpn ~/
	cp ../conf/torrc.sample "$CONF"
	unzip ../bin/WNU_Switch.zip -d ~/Library/Services/
	sudo rm -rf ~/Library/Services/__MACOSX/
}

function io_drivers {
	echo "Install drivers..."
	sudo installer -pkg ../bin/1011/Installer.pkg -target /
	#sudo installer -pkg ../bin/1012/Installer.pkg -target /
	sudo rm -rf /Library/LaunchAgents/Wlan.Software.plist
}

function io_cache {
	echo "Fix cache..."
	sudo touch /System/Library/Extensions
	sudo touch /Library/Extensions
	sudo kextcache -u /
}

function io_replace_app {
	echo "Replace App..."
	sudo rm -rf /Library/Application\ Support/WLAN/StatusBarApp.app/
	unzip ../bin/StatusBarApp_mod_AirPort.zip  -d /Library/Application\ Support/WLAN/
	sudo rm -rf /Library/Application\ Support/WLAN/__MACOSX/
}

function io_permissions {
	echo "Fix Permissions"
	chmod +x /Library/Application\ Support/WLAN/StatusBarApp.app/Contents/bin/*
}

function io_fix_mac {
	echo "Fix MAC-address..."
#autofix disabled wifi (testen on 1 device)
	osascript -e 'open app "StatusBarApp"'
	sleep 3
	grep -rl "0" "$CONF"*rfoff.rtl > "$CONF"MAC ; cat "$CONF"MAC | cut -c 60-71 > "$CONF"DEVICE
	echo "Disabled" > "$CONF"tor
	echo "Disabled" > "$CONF"dnscrypt
	echo "Disabled" > "$CONF"openvpn
	echo "Disabled" > "$CONF"io_ssh_server
	echo "Enabled"  > "$CONF"utility
	echo "" 		> "$CONF"io_ssh
}

function io_start {
	echo "Start App..."
	sudo kextload $SLE/RtWlanU.kext
	sudo kextload $SLE/RtWlanU1827.kext
	sudo killall -9 StatusBarApp
	launchctl load -w -F /Library/LaunchAgents/io_wnu.plist
}

io_startup
io_stop
io_config
io_drivers
io_cache
io_replace_app
io_permissions
io_fix_mac
io_start
