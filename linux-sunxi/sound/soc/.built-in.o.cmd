cmd_sound/soc/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o sound/soc/built-in.o sound/soc/snd-soc-core.o sound/soc/codecs/built-in.o sound/soc/generic/built-in.o sound/soc/adi/built-in.o sound/soc/atmel/built-in.o sound/soc/au1x/built-in.o sound/soc/bcm/built-in.o sound/soc/blackfin/built-in.o sound/soc/cirrus/built-in.o sound/soc/davinci/built-in.o sound/soc/dwc/built-in.o sound/soc/fsl/built-in.o sound/soc/jz4740/built-in.o sound/soc/intel/built-in.o sound/soc/mediatek/built-in.o sound/soc/mxs/built-in.o sound/soc/nuc900/built-in.o sound/soc/omap/built-in.o sound/soc/kirkwood/built-in.o sound/soc/pxa/built-in.o sound/soc/qcom/built-in.o sound/soc/rockchip/built-in.o sound/soc/samsung/built-in.o sound/soc/sh/built-in.o sound/soc/sirf/built-in.o sound/soc/spear/built-in.o sound/soc/sti/built-in.o sound/soc/sunxi/built-in.o sound/soc/tegra/built-in.o sound/soc/txx9/built-in.o sound/soc/ux500/built-in.o sound/soc/xtensa/built-in.o sound/soc/zte/built-in.o ; scripts/mod/modpost sound/soc/built-in.o