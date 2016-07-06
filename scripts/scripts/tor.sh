#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

CONF=/Library/Application\ Support/WLAN/com.realtek.utility.wifi/
APP=/Library/Application\ Support/WLAN/StatusBarApp.app
POPUP=/usr/local/sbin/io_wnu_popup
ACTIVE_DEVICE=`awk '{print $1}' "$CONF"*rfoff.rtl`

exec 6<&0
exec < /Library/Application\ Support/WLAN/com.realtek.utility.wifi/MAC
read a1

if [ "$ACTIVE_DEVICE" != "1" ]; then
    osascript -e 'quit app "StatusBarApp"'
    echo "1" > "$a1"
    "$POPUP" -title ' Hide Utility' -message '' -timeout 3
    open -a "$APP"
else
    osascript -e 'quit app "StatusBarApp"'
    echo "0" > "$a1"
    "$POPUP" -title 'Show Utility' -message '' -timeout 3
    open -a "$APP"
fi



ps au | grep tor
