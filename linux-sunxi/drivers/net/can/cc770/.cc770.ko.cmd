cmd_drivers/net/can/cc770/cc770.ko := /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/can/cc770/cc770.ko drivers/net/can/cc770/cc770.o drivers/net/can/cc770/cc770.mod.o