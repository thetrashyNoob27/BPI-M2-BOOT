cmd_drivers/md/dm-mod.o := /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o drivers/md/dm-mod.o drivers/md/dm-uevent.o drivers/md/dm.o drivers/md/dm-table.o drivers/md/dm-target.o drivers/md/dm-linear.o drivers/md/dm-stripe.o drivers/md/dm-ioctl.o drivers/md/dm-io.o drivers/md/dm-kcopyd.o drivers/md/dm-sysfs.o drivers/md/dm-stats.o ; scripts/mod/modpost drivers/md/dm-mod.o