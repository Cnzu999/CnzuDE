#! /bin/bash
set -e


mkdir ~/.config/dwm/
cp -r dwm/Scripts/ ~/.config/dwm/
cp dwm/wallpaper.jpg ~/.config/dwm/


sudo pacman -Syyu
sudo pacman -S hsetroot volctl sxhkd xcompmgr ttf-roboto-mono nm-applet


cd dwm && sudo make install
sudo make clean

cd ../st && sudo make install
sudo make clean

cd ../dmenu && sudo make install
sudo make clean

cd ../ && cp -r sxhkd/ ~/.config/ 

cd ~/ && touch .xinitrc
echo "exec dwm" >> .xinitrc 


startx
