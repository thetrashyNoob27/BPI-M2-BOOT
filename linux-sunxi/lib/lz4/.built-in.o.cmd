cmd_lib/lz4/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o lib/lz4/built-in.o lib/lz4/lz4_compress.o lib/lz4/lz4_decompress.o ; scripts/mod/modpost lib/lz4/built-in.o