cmd_sound/isa/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o sound/isa/built-in.o sound/isa/ad1816a/built-in.o sound/isa/ad1848/built-in.o sound/isa/cs423x/built-in.o sound/isa/es1688/built-in.o sound/isa/galaxy/built-in.o sound/isa/gus/built-in.o sound/isa/msnd/built-in.o sound/isa/opti9xx/built-in.o sound/isa/sb/built-in.o sound/isa/wavefront/built-in.o sound/isa/wss/built-in.o ; scripts/mod/modpost sound/isa/built-in.o