cmd_drivers/pps/pps_core.o := /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o drivers/pps/pps_core.o drivers/pps/pps.o drivers/pps/kapi.o drivers/pps/sysfs.o ; scripts/mod/modpost drivers/pps/pps_core.o