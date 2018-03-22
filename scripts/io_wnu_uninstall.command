#!/bin/bash
# Copyright © 2018 Fedor Mankov envieid0c (envieidoc@gmail.com)

ROOT_PATH=$(cd $(dirname $0) && pwd);
cd $ROOT_PATH;

function delete_old_settings {
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
}

delete_old_settings