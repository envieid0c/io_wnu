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

function io_delete_old_settings {
	sudo launchctl unload /Library/LaunchDaemons/io_wnu.plist 2>/dev/null
	sudo launchctl unload ~/Library/LaunchAgents/io_wnu.plist 2>/dev/null
	sudo launchctl unload /Library/LaunchDaemons/io_wnu_popup.plist 2>/dev/null
	sudo rm -rf /Library/LaunchDaemons/io_wnu.plist
	sudo rm -rf ~/Library/LaunchAgents/io_wnu.plist
	sudo rm -rf /Library/LaunchDaemons/io_wnu_popup.plist
	sudo rm -rf /usr/local/sbin/io_wnu
	sudo rm -rf /usr/local/sbin/io_wnu_popup
	sudo rm -rf ~/.io_wnusleep
	sudo rm -rf ~/.io_wnuup
	sudo mkdir -p /usr/local/sbin
	osascript -e 'quit app "StatusBarApp"'
}

function io_drivers {
	unzip ../bin/BearExtender-Turbo-b8.zip  -d ../bin/
	sudo ../bin/installpkg ../bin/RTLWlanU_MacOS10.6_MacOS10.11_Driver_1830.2.b17_1827.4.b22_DropDownMenu_5.0.2.b8/Installer.pkg
	rm -rf ../bin/RTLWlanU_MacOS10.6_MacOS10.11_Driver_1830.2.b17_1827.4.b22_DropDownMenu_5.0.2.b8/
}

function io_kext_load {
	sudo kextload /System/Library/Extensions/RtWlanU.kext
	sudo kextload /System/Library/Extensions/RtWlanU1827.kext/
}

function io_new_app {
	osascript -e 'quit app "StatusBarApp"'
	rm -rf /Library/Application\ Support/WLAN/StatusBarApp.app/
	unzip ../bin/StatusBarApp_mod_AirPort.zip  -d /Library/Application\ Support/WLAN/
	rm -rf /Library/Application\ Support/WLAN/__MACOSX/
	osascript -e 'open app "StatusBarApp"'
}

function io_tor {
	rm -rf /usr/local/sbin/tor
	cp ../bin/tor /usr/local/sbin
	chmod +x /usr/local/sbin/tor
}

function io_dnscrypt {
	rm -rf /usr/local/sbin/dnscrypt-proxy
	cp ../bin/dnscrypt-proxy /usr/local/sbin
	chmod +x /usr/local/sbin/dnscrypt-proxy
}

function io_workflow {
	rm -rf ~/Library/Services/WNU\ Switch.workflow/
	unzip ../bin/WNU_Switch.zip -d ~/Library/Services/
	rm -rf ~/Library/Services/__MACOSX/
}

function io_copy_new_settions_and_clean_tmp_files {
	sudo cp ../bin/io_wnu ../bin/io_wnu_popup /usr/local/sbin
	sudo chmod +x /usr/local/sbin/io_wnu*
	sudo cp io_wnu.plist io_wnu_popup.plist /Library/LaunchDaemons/
	sudo cp io_wnu-localuser.plist ~/Library/LaunchAgents/io_wnu.plist
	cp io_wnusleep-local ~/.io_wnusleep
	cp io_wnuup-local ~/.io_wnuup
	sudo chmod +x ~/.io_wnu*
# load launch agent
	sudo launchctl load -w -F /Library/LaunchDaemons/io_wnu.plist
	sudo launchctl load -w -F /Library/LaunchDaemons/io_wnu_popup.plist
	sudo cp io_wnuup io_wnusleep /etc/
	sudo chmod +x /etc/io_wnusleep /etc/io_wnuup
	sudo chown root /etc/io_wnusleep /etc/io_wnuup
}

io_startup
io_delete_old_settings
io_drivers
io_kext_load
io_new_app
io_tor
io_dnscrypt
io_workflow
io_copy_new_settions_and_clean_tmp_files
