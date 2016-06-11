#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

ROOT_PATH=$(cd $(dirname $0) && pwd);
cd $ROOT_PATH;

function delete_old_settings {
sudo launchctl unload /Library/LaunchDaemons/io_wnu.plist 2>/dev/null
sudo launchctl unload ~/Library/LaunchAgents/io_wnu.plist 2>/dev/null
sudo launchctl unload /Library/LaunchDaemons/io_wnu_popup.plist 2>/dev/null
sudo rm -rf /Library/LaunchDaemons/io_wnu.plist
sudo rm -rf ~/Library/LaunchAgents/io_wnu.plist
sudo rm -rf /Library/LaunchDaemons/io_wnu_popup.plist
sudo rm -rf /usr/local/sbin/wnu
sudo rm -rf /usr/local/sbin/wnu_popup
sudo rm -rf ~/.io_wnusleep
sudo rm -rf ~/.io_wnuup
sudo rm -rf /usr/local/sbin/tor
sudo rm -rf /usr/local/sbin/dnscrypt-proxy
sudo rm -rf ~/Library/Services/WNU\ Switch.workflow/ 
unzip ../bin/BearExtender-Turbo-b8.zip  -d ../bin/
sudo ./installpkg ../bin/RTLWlanU_MacOS10.6_MacOS10.11_Driver_1830.2.b17_1827.4.b22_DropDownMenu_5.0.2.b8/Uninstall.pkg
rm -rf ../bin/RTLWlanU_MacOS10.6_MacOS10.11_Driver_1830.2.b17_1827.4.b22_DropDownMenu_5.0.2.b8/
}

delete_old_settings