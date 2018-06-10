
Debian
====================
This directory contains files used to package pizcoind/pizcoin-qt
for Debian-based Linux systems. If you compile pizcoind/pizcoin-qt yourself, there are some useful files here.

## pizcoin: URI support ##


pizcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install pizcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your pizcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/pizcoin128.png` to `/usr/share/pixmaps`

pizcoin-qt.protocol (KDE)

