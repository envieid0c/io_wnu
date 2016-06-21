#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

for user in `echo 'show State:/Users/ConsoleUser' | scutil | awk '/kCGSSessionUserNameKey/ { print $3 }'`; do
	home=`eval echo ~$user`
	if [ -x "$home/.sleep" ]; then
		logger -t $0 "executing .sleep of user $user"
		su - $user -c "$home/.io_wnusleep"
	fi
done
