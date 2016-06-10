#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

ROOT_PATH=$(cd $(dirname $0) && pwd);
cd $ROOT_PATH;

function io_startup {
# acquire sudo at the beginning
sudo -v
# Keep-alive: update existing `sudo` time stamp until `.osx` has finished
while true; do sudo -n true; sleep 60; kill -0 "$$" || exit; done 2>/dev/null &
}

function io_delete_old_settings {
	sudo launchctl unload /Library/LaunchDaemons/io.wnu.plist 2>/dev/null
	sudo launchctl unload ~/Library/LaunchAgents/io.wnu.plist 2>/dev/null
	sudo launchctl unload /Library/LaunchDaemons/io.wnu_popup.plist 2>/dev/null
	sudo rm -rf /Library/LaunchDaemons/io.wnu.plist
	sudo rm -rf ~/Library/LaunchAgents/io.wnu.plist
	sudo rm -rf /Library/LaunchDaemons/io.wnu_popup.plist
	sudo rm -rf /usr/local/sbin/wnu
	sudo rm -rf /usr/local/sbin/wnu_popup
	sudo rm -rf ~/.io.wnusleep
	sudo rm -rf ~/.io.wnuup
	sudo mkdir -p /usr/local/sbin
}

function io_drivers {
	unzip ../bin/BearExtender-Turbo-b8.zip  -d ../bin/
	sudo installpkg ../bin/RTLWlanU_MacOS10.6_MacOS10.11_Driver_1830.2.b17_1827.4.b22_DropDownMenu_5.0.2.b8/Installer.pkg
}

function io_new_app {
	osascript -e 'quit app "StatusBarApp"'
	rm -rf /Library/Application\ Support/WLAN/StatusBarApp.app/
	unzip ../bin/StatusBarApp_mod_AirPort.zip -d /Library/Application\ Support/WLAN/
	osascript -e 'open app "StatusBarApp"'
}

function io_copy_new_settions_and_clean_tmp_files {
	sudo cp wnu wnu_popup /usr/local/sbin
	sudo chmod +x /usr/local/sbin/wnu*
	sudo cp io.wnu.plist io.wnu_popup.plist /Library/LaunchDaemons/
	sudo cp io.wnu-localuser.plist ~/Library/LaunchAgents/io.wnu.plist
	cp io.wnusleep-local ~/.io.wnusleep
	cp io.wnuup-local ~/.io.wnuup
	sudo chmod +x ~/.io.wnu*
# load launch agent
	sudo launchctl load -w -F /Library/LaunchDaemons/io.wnu.plist
	sudo launchctl load -w -F /Library/LaunchDaemons/io.wnu_popup.plist
	sudo cp io.wnuup io.wnusleep /etc/
	sudo chmod +x /etc/io.wnusleep /etc/io.wnuup
	sudo chown root /etc/io.wnusleep /etc/io.wnuup
}

io_startup
io_delete_old_settings
io_drivers
io_new_app
io_copy_new_settions_and_clean_tmp_files