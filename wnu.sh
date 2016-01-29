#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

ROOT_PATH=$(cd $(dirname $0) && pwd);
cd $ROOT_PATH;

function startup {
# acquire sudo at the beginning
sudo -v
# Keep-alive: update existing `sudo` time stamp until `.osx` has finished
while true; do sudo -n true; sleep 60; kill -0 "$$" || exit; done 2>/dev/null &
}

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

sudo mkdir -p /usr/local/sbin
}

function copy_new_settions_and_clean_tmp_files {
sudo cp wnu wnu_popup /usr/local/sbin
sudo cp io.wnu.plist io.wnu_popup.plist /Library/LaunchDaemons/
sudo cp io.wnu-localuser.plist ~/Library/LaunchAgents/io.wnu.plist

cp io.wnusleep-local ~/.io.wnusleep
cp io.wnuup-local ~/.io.wnuup
sudo chmod +x ~/.io.wnu*

# load launch agent
sudo launchctl load -w -F /Library/LaunchDaemons/io.wnu.plist
sudo launchctl load -w -F /Library/LaunchDaemons/io.wnu_popup.plist
sudo cp io.wnuup io.wnusleep /etc/
sudo chmod +x /etc/io.wnusleep /etc/io.wnuup
sudo chown root /etc/io.wnusleep /etc/io.wnuup
}

startup
delete_old_settings
copy_new_settions_and_clean_tmp_files
