#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

CONF=/Library/Application\ Support/WLAN/com.realtek.utility.wifi/

result=connected
while [ true ]; do
  errorscount="$(ping -c 3 google.com 2<&1| grep -icE 'unknown|expired|unreachable|time out')"
  if [ "$result" = connected -a "$errorscount" != 0 ]; then
  result=disconnected
  exec 6<&0
  exec < /Library/Application\ Support/WLAN/com.realtek.utility.wifi/MAC
  read a1
  StatusBarApp_POPUP="$(/usr/local/sbin/io_wnu_popup -title 'Wi-Fi Disabled' -message 'Actions?' -actions 'Enable Wi-Fi',"Show Utility","Hide Utility" -timeout 30 -appIcon /Library/Application\ Support/WLAN/StatusBarApp.app/Contents/Resources/ModelIcon.icns)"
  #-sound default)
      case $StatusBarApp_POPUP in
        "@TIMEOUT") `pkill -f ~/.io_wnuup` ;;
        "@CLOSED") echo "You clicked on the default alert' close button" ;;
        "@CONTENTCLICKED") echo "You clicked the alert's content !" ;;
        "@ACTIONCLICKED") echo "You clicked the alert default action button" ;;
        "Enable Wi-Fi") osascript -e 'quit app "StatusBarApp"' ; echo "1" > "$a1" ; echo "0" > "$a1" ; open -a /Library/Application\ Support/WLAN/StatusBarApp.app ;;
        "Show Utility") osascript -e 'quit app "StatusBarApp"' ; echo "1" > "$a1" ; echo "0" > "$a1" ; open -a /Library/Application\ Support/WLAN/StatusBarApp.app ;;
        "Hide Utility") osascript -e 'quit app "StatusBarApp"' ; echo "1" > "$a1" ; pkill -f ~/.io_wnuup ;;
        **) echo "? --> $StatusBarApp_POPUP" ;;
      esac
  fi
  if [ "$result" = disconnected -a "$errorscount" = 0 ]; then
  result=connected
  StatusBarApp_POPUP="$(/usr/local/sbin/io_wnu_popup -title 'Wi-Fi Enabled' -message 'All is well?' -actions "Disable Wi-Fi","Show Utility","Hide Utility" -timeout 15 -appIcon /Library/Application\ Support/WLAN/StatusBarApp.app/Contents/Resources/ModelIcon.icns)"
  #-sound default)
      case $StatusBarApp_POPUP in
        "@TIMEOUT") echo "OK" ;;
        "@CLOSED") echo "You clicked on the default alert' close button" ;;
        "@CONTENTCLICKED") echo "You clicked the alert's content !" ;;
        "@ACTIONCLICKED") echo "You clicked the alert default action button" ;;
        "Disable Wi-Fi") osascript -e 'quit app "StatusBarApp"' ; echo "1" > $a1 ; open -a /Library/Application\ Support/WLAN/StatusBarApp.app ;;
        "Show Utility") osascript -e 'quit app "StatusBarApp"' ; echo "1" > "$a1" ; echo "0" > "$a1" ; open -a /Library/Application\ Support/WLAN/StatusBarApp.app ;;
        "Hide Utility") osascript -e 'quit app "StatusBarApp"' ; echo "1" > $a1 ; pkill -f ~/.io_wnuup ;;
        **) echo "? --> $StatusBarApp_POPUP" ;;
      esac
  fi
  sleep 5
done
