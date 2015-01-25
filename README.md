# mt7610u_wifi
Ubuntu 14.10 w/ Kernel 3.16.0-29-generic compatible driver for ASUS Dual-Band Wireless-AC600 Wi-Fi Adapter (USB-AC51)
I didn't clean up any of the warnings and I pretty much did the quickest hacks to get this functioning.
Kernel panics after 1-5 mintues of connection on Xubuntu 14.10. I spent about 15 total hours trying to get ubuntu to crap out logs or some sort of information regarding it and it just refuses. I've tried everything to get crashkernel to restart and dump properly but it won't. I don't have time for this crap. I don't mind working to solve the problem but if I can't get any f*ing info do debug it (the part that should take zero effort) Ubuntu can go straight to hell.


sudo apt-get update

sudo apt-get install linux-headers-generic build-essential git

git clone https://github.com/likwidoxigen/mt7610u_wifi.git

cd ~/rtl8812au

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

Things that don't work to get a core dump or any sort of panic info & general info:
https://wiki.ubuntu.com/Kernel/KernelDebuggingTricks
https://help.ubuntu.com/lts/serverguide/kernel-crash-dump.html
http://www.dedoimedo.com/computers/crash-analyze.html
http://stackoverflow.com/questions/7732983/core-dump-file-is-not-generated
https://wiki.ubuntu.com/Kernel/CrashdumpRecipe?action=show&redirect=KernelTeam%2FCrashdumpRecipe
http://magazine.redhat.com/2007/08/15/a-quick-overview-of-linux-kernel-crash-dump-analysis/
http://unix.stackexchange.com/questions/5459/how-to-understand-the-kernel-panic-core-dump-output
http://unix.stackexchange.com/questions/60574/determining-cause-of-linux-kernel-panic
