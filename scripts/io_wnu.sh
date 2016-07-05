#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

CONF=/Library/Application\ Support/WLAN/com.realtek.utility.wifi/
POPUP=/usr/local/sbin/io_wnu_popup
SERVICE=`launchctl list | grep wnu | awk '{print $2}'`

# check service status
if [ "$SERVICE" != "0" ]; then
  echo "Service disabled" > /tmp/check_service
else
  echo "Service enabled" > /tmp/check_service
fi

CHECK_SERVICE=$(cat /tmp/check_service)

function switch_service {
  launchctl list | grep wnu | awk '{print $2}' > /tmp/io_service

  exec 6<&0
  exec < /tmp/io_service
  read a1

  if [ "$a1" != "0" ]; then
      launchctl load /Library/LaunchAgents/io_wnu.plist 
      "$POPUP" -title ' Service enabled' -message '' -timeout 3
      rm -rf /tmp/io_service
  else
      launchctl unload /Library/LaunchAgents/io_wnu.plist
      "$POPUP" -title ' Service disabled' -message '' -timeout 3
  fi
}

result=connected
while [ true ]; do
  errorscount="$(ping -c 3 google.com 2<&1| grep -icE 'unknown|expired|unreachable|time out')"
  if [ "$result" = connected -a "$errorscount" != 0 ]; then
  result=disconnected
  exec 6<&0
  exec < /Library/Application\ Support/WLAN/com.realtek.utility.wifi/MAC
  read a1
  StatusBarApp_POPUP="$(/usr/local/sbin/io_wnu_popup -title 'Wi-Fi Disabled' -subtitle "$CHECK_SERVICE" -message 'Actions?' -actions 'Enable Wi-Fi',"Switch Service","Show Utility","Hide Utility" -timeout 30 -appIcon /Library/Application\ Support/WLAN/StatusBarApp.app/Contents/Resources/ModelIcon.icns)"
  #-sound default)
      case $StatusBarApp_POPUP in
        "@TIMEOUT") `pkill -f ~/.io_wnuup` ;;
        "@CLOSED") echo "You clicked on the default alert' close button" ;;
        "@CONTENTCLICKED") echo "You clicked the alert's content !" ;;
        "@ACTIONCLICKED") echo "You clicked the alert default action button" ;;
        "Enable Wi-Fi") osascript -e 'quit app "StatusBarApp"' ; echo "1" > "$a1" ; echo "0" > "$a1" ; open -a /Library/Application\ Support/WLAN/StatusBarApp.app ;;
        "Switch Service") switch_service ;;
        "Show Utility") osascript -e 'quit app "StatusBarApp"' ; echo "1" > "$a1" ; echo "0" > "$a1" ; open -a /Library/Application\ Support/WLAN/StatusBarApp.app ;;
        "Hide Utility") osascript -e 'quit app "StatusBarApp"' ; echo "1" > "$a1" ; pkill -f ~/.io_wnuup ;;
        **) echo "? --> $StatusBarApp_POPUP" ;;
      esac
  fi
  if [ "$result" = disconnected -a "$errorscount" = 0 ]; then
  result=connected
  StatusBarApp_POPUP="$(/usr/local/sbin/io_wnu_popup -title 'Wi-Fi Enabled' -subtitle "$CHECK_SERVICE" -message 'All is well?' -actions "Disable Wi-Fi","Switch Service","Show Utility","Hide Utility" -timeout 15 -appIcon /Library/Application\ Support/WLAN/StatusBarApp.app/Contents/Resources/ModelIcon.icns)"
  #-sound default)
      case $StatusBarApp_POPUP in
        "@TIMEOUT") echo "OK" ;;
        "@CLOSED") echo "You clicked on the default alert' close button" ;;
        "@CONTENTCLICKED") echo "You clicked the alert's content !" ;;
        "@ACTIONCLICKED") echo "You clicked the alert default action button" ;;
        "Disable Wi-Fi") osascript -e 'quit app "StatusBarApp"' ; echo "1" > $a1 ; open -a /Library/Application\ Support/WLAN/StatusBarApp.app ;;
        "Switch Service") switch_service ;;
        "Show Utility") osascript -e 'quit app "StatusBarApp"' ; echo "1" > "$a1" ; echo "0" > "$a1" ; open -a /Library/Application\ Support/WLAN/StatusBarApp.app ;;
        "Hide Utility") osascript -e 'quit app "StatusBarApp"' ; echo "1" > $a1 ; pkill -f ~/.io_wnuup ;;
        **) echo "? --> $StatusBarApp_POPUP" ;;
      esac
  fi
  sleep 5
done
