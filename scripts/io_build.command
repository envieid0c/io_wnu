#!/bin/bash
# Copyright © 2018 Fedor Mankov envieid0c (envieidoc@gmail.com)

ROOT_PATH=$(cd $(dirname $0) && pwd);
cd $ROOT_PATH;

shc='./shc -v -r -f'
zstd='./zstd -f'

obfuscation() {
	$shc io_build.command
	$shc io_wnu_install.command
	$shc io_wnu_popup.command
	$shc io_wnu_uninstall.command
	$shc io_wnu.command
}

zstd() {
	$zstd io_build.command.x -o io_build.command.zst
	$zstd io_wnu_install.command.x -o io_wnu_install.command.zst
	$zstd io_wnu_popup.command.x -o io_wnu_popup.command.zst
	$zstd io_wnu_uninstall.command.x -o io_wnu_uninstall.command.zst
	$zstd io_wnu.command.x -o io_wnu.command.zst
}

move() {
	mkdir -p c_code/ c_bin/ c_bin_zst/
	mv -f *.x.c c_code/
	mv -f *.x c_bin/
	mv -f *.zst c_bin_zst/
}

rename() {
	for i in `find c_bin/ -name "*.command.x"`; do mv $i $(ls $i|sed -e 's/\.command.x//'); done
}

create_work() {
	rm -rf ../work/*
	cp -Rf c_bin_zst/ ../work/bin
	cp -Rf ../alias/lib/ ../work/lib
	cp -Rf ../alias/sbin/ ../work/sbin
	cp -Rf ../alias/soft/ ../work/soft
	cp -Rf ../conf/ ../work/config
	mkdir -p ../work/app
	cp -Rf ../bin/StatusBarApp.tar.xz ../work/app
	cp -Rf ../bin/WNU_Switch.workflow.tar.xz ../work/app
	mkdir -p ../work/kext
	cp -Rf ../bin/1013/* ../work/kext
	cp io_wnu.plist ../work/
	rm -rf ../work/soft/.DS_Store
	rm -rf ../work/.DS_Store
}

comress_all() {
	zip --symlinks -r ../io_wnu.zip ../work/
	rm -rf ../work/
	mkdir -p ../work
	mv ../io_wnu.zip ../work/
}

obfuscation
zstd
move
rename
create_work
comress_all
