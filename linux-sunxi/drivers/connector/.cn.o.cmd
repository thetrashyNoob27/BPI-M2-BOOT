cmd_drivers/connector/cn.o := /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o drivers/connector/cn.o drivers/connector/cn_queue.o drivers/connector/connector.o ; scripts/mod/modpost drivers/connector/cn.o