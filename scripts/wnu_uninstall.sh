#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

ROOT_PATH=$(cd $(dirname $0) && pwd);
cd $ROOT_PATH;

function delete_old_settings {
sudo launchctl unload /Library/LaunchDaemons/io.wnu.plist 2>/dev/null
sudo launchctl unload ~/Library/LaunchAgents/io.wnu.plist 2>/dev/null
sudo launchctl unload /Library/LaunchDaemons/io.wnu_popup.plist 2>/dev/null
sudo rm -rf /Library/LaunchDaemons/io.wnu.plist
sudo rm -rf ~/Library/LaunchAgents/io.wnu.plist
sudo rm -rf /Library/LaunchDaemons/io.wnu_popup.plist
sudo rm -rf /usr/local/sbin/wnu
sudo rm -rf /usr/local/sbin/wnu_popup
sudo rm -rf ~/.io.wnusleep
sudo rm -rf ~/.io.wnuup
}

delete_old_settings