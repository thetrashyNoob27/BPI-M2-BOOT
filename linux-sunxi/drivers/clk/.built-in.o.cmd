cmd_drivers/clk/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o drivers/clk/built-in.o drivers/clk/clk-devres.o drivers/clk/clkdev.o drivers/clk/clk.o drivers/clk/clk-divider.o drivers/clk/clk-fixed-factor.o drivers/clk/clk-fixed-rate.o drivers/clk/clk-gate.o drivers/clk/clk-multiplier.o drivers/clk/clk-mux.o drivers/clk/clk-composite.o drivers/clk/clk-fractional-divider.o drivers/clk/clk-gpio.o drivers/clk/clk-conf.o drivers/clk/bcm/built-in.o drivers/clk/sunxi/built-in.o ; scripts/mod/modpost drivers/clk/built-in.o