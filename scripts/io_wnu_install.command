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
	sudo launchctl unload /Library/LaunchAgents/io_wnu.plist
	sudo kextunload $SLE/RtWlanU.kext
	sudo kextunload $SLE/RtWlanU1827.kext
	sudo rm -rf $SLE/RtWlanU.kext
	sudo rm -rf $SLE/RtWlanU1827.kext
	launchctl unload /Library/LaunchAgents/io_wnu.plist
	osascript -e 'quit app "StatusBarApp"'
	sudo rm -rf /Library/LaunchAgents/io_wnu.plist
	sudo rm -rf /usr/local/sbin/io_wnu_popup
	sudo rm -rf /usr/local/sbin/tor*
	sudo rm -rf /usr/local/sbin/dnscrypt-proxy
	sudo rm -rf /usr/local/sbin/minisign
	sudo rm -rf /usr/local/sbin/openvpn
	sudo rm -rf /usr/local/sbin/tshark
	sudo rm -rf /usr/local/sbin/pdml2html.xsl
	sudo rm -rf /usr/local/sbin/speedtest.py
	sudo rm -rf /usr/local/sbin/io_wnu_popup
	sudo rm -rf /usr/local/opt/libevent/
	sudo rm -rf /usr/local/opt/libsodium/
	sudo rm -rf /usr/local/lib/liblzo2*
	sudo rm -rf /Library/Application\ Support/WLAN/StatusBarApp.app/
	sudo rm -rf /Library/Application\ Support/WLAN/__MACOSX/
	sudo rm -rf /Library/Application\ Support/WLAN/com.realtek.utility.wifi/
	sudo rm -rf ~/Library/Services/WNU\ Switch.workflow/
	
	# fix for remove config "yes" "no"
	#sudo cp /Library/Application\ Support/WLAN/StatusBarApp.app/Content/conf* ~/Desktop/backup/
	#sudo rm -rf /Library/Application\ Support/WLAN/com.realtek.utility.wifi/
	sudo killall -9 io_wnu
}

function io_config {
	mkdir -p /usr/local/sbin
	mkdir -p /usr/local/opt/libevent/lib/
	mkdir -p /usr/local/opt/libsodium/lib/
	mkdir -p /usr/local/opt/openssl/lib/
	mkdir -p /usr/local/Cellar/openssl/1.0.2i/lib/
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

function io_permissions {
	chmod +x /Library/Application\ Support/WLAN/StatusBarApp.app/Contents/bin/*
}

function io_kext {
	unzip ../bin/kext/RtWlanU.kext.zip  -d ../bin/kext/
	rm -rf ../bin/kext/__MACOSX
	sudo mv ../bin/kext/RtWlanU.kext/ $SLE/RtWlanU.kext
	unzip ../bin/kext/RtWlanU1827.kext.zip  -d ../bin/kext/
	sudo mv ../bin/kext/RtWlanU1827.kext/ $SLE/RtWlanU1827.kext
	rm -rf ../bin/kext/__MACOSX
	sudo chmod -R 755 $SLE/RtWlanU.kext $SLE/RtWlanU1827.kext
	sudo chown -R root:wheel $SLE/RtWlanU.kext $SLE/RtWlanU1827.kext
}

function io_cache {
	sudo touch /System/Library/Extensions
	sudo touch /Library/Extensions
	sudo kextcache -u /
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
	grep -rl "0" "$CONF"*rfoff.rtl > "$CONF"MAC ; cat "$CONF"MAC | cut -c 60-71 > "$CONF"DEVICE
	echo "Disabled" > "$CONF"tor
	echo "Disabled" > "$CONF"dnscrypt
	echo "Disabled" > "$CONF"openvpn
	echo "Disabled" > "$CONF"io_ssh_server
	echo "Enabled"  > "$CONF"utility
	echo "" 		> "$CONF"io_ssh
}

function io_start {
	sudo kextload $SLE/RtWlanU.kext
	sudo kextload $SLE/RtWlanU1827.kext
	sudo killall -9 StatusBarApp
	launchctl load -w -F /Library/LaunchAgents/io_wnu.plist
}

io_startup
io_stop
io_config
io_permissions
io_kext
io_cache
io_replace_app
io_fix_mac
io_start
