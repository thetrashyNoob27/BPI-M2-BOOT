cmd_drivers/spi/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o drivers/spi/built-in.o drivers/spi/spi.o drivers/spi/spidev.o drivers/spi/spi-bitbang.o drivers/spi/spi-gpio.o drivers/spi/spi-sunxi.o ; scripts/mod/modpost drivers/spi/built-in.o