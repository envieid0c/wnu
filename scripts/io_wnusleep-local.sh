#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)

CONF=/Library/Application\ Support/WLAN/com.realtek.utility.wifi/

grep -rl "0" "$CONF"*rfoff.rtl > "$CONF"MAC
cat "$CONF"MAC | cut -c 60-71 > "$CONF"DEVICE
cat "$CONF"MAC  
exec 6<&0 
exec < "$CONF"MAC
read a1
echo "1" > "$a1"
osascript -e 'quit app "StatusBarApp"'
pkill -f ~/.io_wnuup
exit 0