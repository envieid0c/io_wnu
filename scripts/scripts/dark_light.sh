#!/bin/bash

SET_MODE=/Library/Application\ Support/WLAN/StatusBarApp.app/Contents
APP=/Library/Application\ Support/WLAN/StatusBarApp.app
CHECK=`ls -al | sed -n '9p' | awk '{print $11}'`

cd "$SET_MODE"

if [ "$CHECK" != "Dark" ]; then
	rm -rf Resources
	ln -s Dark Resources
	osascript -e 'quit app "StatusBarApp"'
	open -a "$APP"
else
	rm -rf Resources
	ln -s Light Resources
	osascript -e 'quit app "StatusBarApp"'
	open -a "$APP"
fi
