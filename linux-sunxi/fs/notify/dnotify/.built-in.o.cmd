cmd_fs/notify/dnotify/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o fs/notify/dnotify/built-in.o fs/notify/dnotify/dnotify.o ; scripts/mod/modpost fs/notify/dnotify/built-in.o