#!/bin/sh
rm -rf /Volumes/Dados/Qt-Projects/dmsa-win
cp -R /Volumes/Dados/Qt-Projects/dmsa/dmsa /Volumes/Dados/Qt-Projects/dmsa-win
cd /Volumes/Dados/Qt-Projects/dmsa-win
/Users/sandro/mxe/usr/i686-pc-mingw32.static/qt/bin/qmake /Volumes/Dados/Qt-Projects/dmsa-win/dmsa.pro
export PATH=$PATH:/Users/sandro/mxe/usr/bin
make -f /Volumes/Dados/Qt-Projects/dmsa-win/Makefile.Release
cp /Volumes/Dados/Qt-Projects/dmsa-win/release/dmsa.exe /Volumes/Dados/Qt-Projects/dmsa/executable/dmsa-qt-win.exe