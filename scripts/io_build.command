#!/bin/bash
# Copyright © 2018 Fedor Mankov envieid0c (envieidoc@gmail.com)

ROOT_PATH=$(cd $(dirname $0) && pwd);
cd $ROOT_PATH;

shc='./shc -v -r -f'
zstd='./zstd -f'

function obfuscation {
	$shc io_build.command
	$shc io_wnu_install.command
	$shc io_wnu_popup.command
	$shc io_wnu_uninstall.command
	$shc io_wnu.command
}

function zstd {
	$zstd io_build.command.x -o io_build.command.zst
	$zstd io_wnu_install.command.x -o io_wnu_install.command.zst
	$zstd io_wnu_popup.command.x -o io_wnu_popup.command.zst
	$zstd io_wnu_uninstall.command.x -o io_wnu_uninstall.command.zst
	$zstd io_wnu.command.x -o io_wnu.command.zst
}

function move {
	mkdir -p c_code/ c_bin/ c_bin_zst/
	mv -f *.x.c c_code/
	mv -f *.x c_bin/
	mv -f *.zst c_bin_zst/
}

function rename {
	for i in `find c_bin/ -name "*.command.x"`; do mv $i $(ls $i|sed -e 's/\.command.x//'); done
}

function create_work{
	cp -Rf c_bin_zst/ ../work/bin
	cp -Rf ../alias/lib/ ../work/lib
	cp -Rf ../alias/sbin/ ../work/sbin
	cp -Rf ../alias/soft/ ../work/soft
	cp -Rf ../conf/ ../work/config
	mkdir -p ../work/app
	cp -Rf ../bin/StatusBarApp.tar.xz ../work/app
	cp -Rf ../bin/WNU_Switch.workflow.tar.xz ../work/app
}
function comress_all {
	tar -cf - ../work | xz -9 -c - > ../io_wnu.tar.xz
	rm -rf ../work/
	mkdir -p ../work
	mv ../io_wnu.tar.xz ../work/
}

obfuscation
zstd
move
rename
