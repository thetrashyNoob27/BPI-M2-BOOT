cmd_drivers/base/regmap/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o drivers/base/regmap/built-in.o drivers/base/regmap/regmap.o drivers/base/regmap/regcache.o drivers/base/regmap/regcache-rbtree.o drivers/base/regmap/regcache-lzo.o drivers/base/regmap/regcache-flat.o drivers/base/regmap/regmap-debugfs.o drivers/base/regmap/regmap-i2c.o drivers/base/regmap/regmap-spi.o drivers/base/regmap/regmap-mmio.o drivers/base/regmap/regmap-irq.o ; scripts/mod/modpost drivers/base/regmap/built-in.o