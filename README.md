# mt7610u_wifi
Ubuntu 14.10 compatible driver for ASUS Dual-Band Wireless-AC600 Wi-Fi Adapter (USB-AC51)
I didn't clean up any of the warnings and I pretty much did the quickest hacks to get this functioning.

make
sudo make install

At this point I did 
sudo modprobe -v mt7650u_sta
iwconfig

I saw the RA0 adapter but I could only configure it manually not in network-mangager. 

Out of frustration I did the "windows fix" and rebooted the thing. That did the trick.
It all popped up in network manager like it was supposed to and I could connect like a boss.



References:
https://wikidevi.com/wiki/ASUS_USB-AC51
ubuntuforums.org/showthread.php?t=2228244&page=1
http://ubuntuforums.org/showthread.php?t=1659919
http://ubuntuforums.org/showthread.php?t=2171240
