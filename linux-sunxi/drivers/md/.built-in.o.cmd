cmd_drivers/md/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o drivers/md/built-in.o drivers/md/dm-mod.o drivers/md/dm-builtin.o drivers/md/dm-bufio.o drivers/md/dm-crypt.o drivers/md/dm-snapshot.o drivers/md/dm-mirror.o drivers/md/dm-log.o drivers/md/dm-region-hash.o drivers/md/dm-zero.o ; scripts/mod/modpost drivers/md/built-in.o