cmd_drivers/input/touchscreen/gt5688/gt5688.o := /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o drivers/input/touchscreen/gt5688/gt5688.o drivers/input/touchscreen/gt5688/gt1x.o drivers/input/touchscreen/gt5688/gt1x_generic.o drivers/input/touchscreen/gt5688/gt1x_tools.o drivers/input/touchscreen/gt5688/gt1x_update.o ; scripts/mod/modpost drivers/input/touchscreen/gt5688/gt5688.o