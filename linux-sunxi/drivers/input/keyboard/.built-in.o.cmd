cmd_drivers/input/keyboard/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o drivers/input/keyboard/built-in.o drivers/input/keyboard/atkbd.o drivers/input/keyboard/sunxi_gpio_keys.o drivers/input/keyboard/sunxi-keyboard.o ; scripts/mod/modpost drivers/input/keyboard/built-in.o