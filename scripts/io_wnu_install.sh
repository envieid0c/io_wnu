#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

ROOT_PATH=$(cd $(dirname $0) && pwd);
cd $ROOT_PATH;

function io_startup {
# acquire sudo at the beginning
sudo -v
# Keep-alive: update existing `sudo` time stamp until `.osx` has finished
while true; do sudo -n true; sleep 60; kill -0 "$$" || exit; done 2>/dev/null &
}

function io_stop {
	sudo launchctl unload /Library/LaunchAgents/io_wnu.plist 2>/dev/null
	sudo launchctl unload /Library/LaunchAgents/io_wnu.plist 2>/dev/null
	osascript -e 'quit app "StatusBarApp"'
	sudo rm -rf /Library/LaunchAgents/io_wnu.plist
	sudo rm -rf /usr/local/sbin/io_wnu
	sudo rm -rf /usr/local/sbin/io_wnu_popup
	sudo rm -rf /usr/local/sbin/tor
	sudo rm -rf /Library/Application\ Support/WLAN/StatusBarApp.app/
	sudo rm -rf /Library/Application\ Support/WLAN/__MACOSX/
	sudo rm -rf /usr/local/sbin/dnscrypt-proxy
	sudo rm -rf /usr/local/lib/liblzo2*
	sudo rm -rf /usr/local/opt/libevent/
	sudo rm -rf /usr/local/opt/libsodium/
	sudo rm -rf /usr/local/sbin/openvpn
	sudo rm -rf ~/Library/Services/WNU\ Switch.workflow/
}

function io_config {
	mkdir -p /usr/local/sbin
	mkdir -p /usr/local/opt/libevent/lib/
	mkdir -p /usr/local/opt/libsodium/lib/
	cp c_bin/io_wnu ../bin/io_wnu_popup /usr/local/sbin
	sudo cp io_wnu.plist /Library/LaunchAgents/
	cp ../bin/tor /usr/local/sbin
	cp ../bin/openvpn /usr/local/sbin
	cp ../lib/liblzo2* /usr/local/lib
	cp ../lib/libevent* /usr/local/opt/libevent/lib/
	cp ../lib/libsodium* /usr/local/opt/libsodium/lib/
	cp ../config.ovpn ~/
	cp ../bin/dnscrypt-proxy /usr/local/sbin
	unzip ../bin/WNU_Switch.zip -d ~/Library/Services/
	sudo rm -rf ~/Library/Services/__MACOSX/
}

function io_permissions {
	chmod +x /usr/local/sbin/io_wnu
	chmod +x /usr/local/sbin/tor
	chmod +x /usr/local/sbin/openvpn
	chmod +x /usr/local/sbin/dnscrypt-proxy
}

function io_drivers {
	unzip ../bin/BearExtender-Turbo-b8.zip  -d ../bin/
	sudo ../bin/installpkg ../bin/RTLWlanU_MacOS10.6_MacOS10.11_Driver_1830.2.b17_1827.4.b22_DropDownMenu_5.0.2.b8/Installer.pkg
	rm -rf ../bin/RTLWlanU_MacOS10.6_MacOS10.11_Driver_1830.2.b17_1827.4.b22_DropDownMenu_5.0.2.b8/
}

function io_replace_app {
	sudo rm -rf /Library/Application\ Support/WLAN/StatusBarApp.app/
	unzip ../bin/StatusBarApp_mod_AirPort.zip  -d /Library/Application\ Support/WLAN/
	sudo rm -rf /Library/Application\ Support/WLAN/__MACOSX/
}

function io_fix_mac {
#autofix disabled wifi (testen on 1 device)
	osascript -e 'open app "StatusBarApp"'
	sleep 3
	CONF=/Library/Application\ Support/WLAN/com.realtek.utility.wifi/
	grep -rl "0" "$CONF"*rfoff.rtl > "$CONF"MAC ; cat "$CONF"MAC | cut -c 60-71 > "$CONF"DEVICE
	echo "Disabled" > "$CONF"tor
	echo "Disabled" > "$CONF"dnscrypt
	echo "Disabled" > "$CONF"openvpn
	echo "Enabled" > "$CONF"utility
}

function io_start {
	sudo kextload /System/Library/Extensions/RtWlanU.kext
	sudo kextload /System/Library/Extensions/RtWlanU1827.kext/
	launchctl load -w -F /Library/LaunchAgents/io_wnu.plist
}

io_startup
io_stop
io_config
io_permissions
io_drivers
io_replace_app
io_fix_mac
io_start
