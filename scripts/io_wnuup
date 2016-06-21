#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

for user in `echo 'show State:/Users/ConsoleUser' | scutil | awk '/kCGSSessionUserNameKey/ { print $3 }'`; do
	home=`eval echo ~$user`
	if [ -x "$home/.wakeup" ]; then
		logger -t $0 "executing .wakeup of user $user"
		su - $user -c "$home/.io_wnuup"
	fi
done
