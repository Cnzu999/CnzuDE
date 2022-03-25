#! /bin/bash
set -e

mkdir -p $HOME/.config/
sudo mkdir -p /usr/share/backgrounds/cnzn/
sudo cp wallpaper/wallpaper.jpg /usr/share/backgrounds/cnzn/wallpaper.jpg

sudo pacman -Syu

sudo pacman -S hsetroot sxhkd picom ttf-roboto-mono network-manager-applet xorg-xsetroot pulseaudio pavucontrol python-setuptools xorg xorg-server xorg-xinit

mkdir -p AURPackages
cd AURPackages

git clone https://aur.archlinux.org/python-pulsectl.git
cd python-pulsectl && makepkg -si

cd ../
git clone https://aur.archlinux.org/volctl.git
cd volctl && makepkg -si

cd ../../dwm && sudo make install
sudo make clean

cd ../st && sudo make install
sudo make clean

cd ../dmenu && sudo make install
sudo make clean

cd ../ && cp -r sxhkd/ $HOME/.config/ 

cd $HOME && touch .xinitrc
echo "exec dwm" > .xinitrc 
