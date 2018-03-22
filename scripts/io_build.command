#!/bin/bash
# Copyright © 2018 Fedor Mankov envieid0c (envieidoc@gmail.com)

ROOT_PATH=$(cd $(dirname $0) && pwd);
cd $ROOT_PATH;

shc='./shc -v -r -f'

function obfuscation {
	$shc io_build.command
	$shc io_wnu_install.command
	$shc io_wnu_popup.command
	$shc io_wnu_uninstall.command
	$shc io_wnu.command
}

function move {
	mkdir -p c_code/ c_bin/
	mv -f *.x.c c_code/
	mv -f *.x c_bin/
}

function rename {
	for i in `find c_bin/ -name "*.command.x"`; do mv $i $(ls $i|sed -e 's/\.command.x//'); done
}
obfuscation
move
rename
