#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

ROOT_PATH=$(cd $(dirname $0) && pwd);
cd $ROOT_PATH;

shc='./shc -v -r -T -f '

function obfuscation {
	$shc compiling.sh
	$shc io_wnu_install.sh
	$shc io_wnu_popup.sh
	$shc io_wnu_uninstall.sh
	$shc io_wnu.sh
	$shc service.sh
	$shc tor.sh
	$shc utility.sh
	$shc wifi.sh
}

function move {
	mkdir -p c_code/ c_bin/
	mv -f *.x.c c_code/
	mv -f *.x c_bin/
}

function rename {
	for i in `find c_bin/ -name "*.sh.x"`; do mv $i $(ls $i|sed -e 's/\.sh.x//'); done
}
obfuscation
move
rename
