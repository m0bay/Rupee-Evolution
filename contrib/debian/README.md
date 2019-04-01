
Debian
====================
This directory contains files used to package rupeeevolutiond/rupeeevolution-qt
for Debian-based Linux systems. If you compile rupeeevolutiond/rupeeevolution-qt yourself, there are some useful files here.

## rupeeevolution: URI support ##


rupeeevolution-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install rupeeevolution-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your rupeeevolutionqt binary to `/usr/bin`
and the `../../share/pixmaps/rupeeevolution128.png` to `/usr/share/pixmaps`

rupeeevolution-qt.protocol (KDE)

