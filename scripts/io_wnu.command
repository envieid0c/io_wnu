#!/bin/bash
# Copyright © 2018 Fedor Mankov envieid0c (envieidoc@gmail.com)

APP=/Library/Application\ Support/WLAN/StatusBarApp.app/
CONF="$APP"Contents/conf/
SBIN="$APP"Contents/sbin/
POPUP="$SBIN"/io_wnu_popup
SERVICE=`launchctl list | grep wnu | awk '{print $2}'`

# check service status
if [ "$SERVICE" = "0" ]; then
  echo "Service Enabled" > "$CONF"check_service
  echo "Enabled" > "$CONF"service
  echo "0" > "$CONF"service_status
else
  echo "Service Disabled" > "$CONF"check_service
  echo "Disabled" > "$CONF"service
  echo "1" > "$CONF"service_status
fi

CHECK_SERVICE=$(cat "$CONF"check_service)

function switch_service {
  launchctl list | grep wnu | awk '{print $2}' > "$CONF"service_status

  exec 6<&0
  exec < "$CONF"service_status
  read a1

  if [ "$a1" != "0" ]; then
    launchctl load /Library/LaunchAgents/io_wnu.plist
    "$POPUP" -title ' Service enabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
    echo "Service Enabled" > "$CONF"check_service
    echo "Enabled" > "$CONF"service
    echo "0" > "$CONF"service_status
  else
    launchctl unload /Library/LaunchAgents/io_wnu.plist
    "$POPUP" -title ' Service disabled' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
    echo "Service Disabled" > "$CONF"check_service
    echo "Disabled" > "$CONF"service
    echo "1" > "$CONF"service_status
  fi
}

function switch_utility {
  unit=$(cat "$CONF"utility)

  if [ "$unit" != "Enabled" ]; then
    echo Enabled > "$CONF"utility
    osascript -e 'open app "StatusBarApp"' & "$POPUP" -title 'Shown Utility' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  else
    echo Disabled > "$CONF"utility
    osascript -e 'quit app "StatusBarApp"' & "$POPUP" -title 'Hidden Utility' -message '' -timeout 3 -appIcon "$APP"Contents/Resources/ModelIcon.icns
  fi
}

result=connected
while [ true ]; do
  errorscount="$(ping -c 3 8.8.8.8 2<&1| grep -icE 'unknown|expired|unreachable|time out')"
  if [ "$result" = connected -a "$errorscount" != 0 ]; then
  result=disconnected
  exec 6<&0
  exec < /Library/Application\ Support/WLAN/com.realtek.utility.wifi/MAC
  read a1
  StatusBarApp_POPUP="$("$SBIN"/io_wnu_popup -title 'Wi-Fi Disabled' -subtitle "$CHECK_SERVICE" -message 'Actions?' -actions 'Enable Wi-Fi',"Switch Service","Show/Hide Utility" -timeout 30 -appIcon "$APP"Contents/Resources/ModelIcon.icns)"
  #-sound default)
      case $StatusBarApp_POPUP in
        "@TIMEOUT") `pkill -f ~/.io_wnuup` ;;
        "@CLOSED") echo "You clicked on the default alert' close button" ;;
        "@CONTENTCLICKED") echo "You clicked the alert's content !" ;;
        "@ACTIONCLICKED") echo "You clicked the alert default action button" ;;
        "Enable Wi-Fi") osascript -e 'quit app "StatusBarApp"' ; echo "1" > "$a1" ; echo "0" > "$a1" ; open -a "$APP" ;;
        "Switch Service") switch_service ;;
        "Show/Hide Utility") switch_utility ;;
        **) echo "? --> $StatusBarApp_POPUP" ;;
      esac
  fi
  if [ "$result" = disconnected -a "$errorscount" = 0 ]; then
  result=connected
  StatusBarApp_POPUP="$("$SBIN"/io_wnu_popup -title 'Wi-Fi Enabled' -subtitle "$CHECK_SERVICE" -message 'All is well?' -actions "Disable Wi-Fi","Switch Service","Show/Hide Utility" -timeout 15 -appIcon "$APP"Contents/Resources/ModelIcon.icns)"
  #-sound default)
      case $StatusBarApp_POPUP in
        "@TIMEOUT") echo "OK" ;;
        "@CLOSED") echo "You clicked on the default alert' close button" ;;
        "@CONTENTCLICKED") echo "You clicked the alert's content !" ;;
        "@ACTIONCLICKED") echo "You clicked the alert default action button" ;;
        "Disable Wi-Fi") osascript -e 'quit app "StatusBarApp"' ; echo "1" > $a1 ; open -a "$APP" ;;
        "Switch Service") switch_service ;;
        "Show/Hide Utility") switch_utility ;;
        **) echo "? --> $StatusBarApp_POPUP" ;;
      esac
  fi
  sleep 5
done
