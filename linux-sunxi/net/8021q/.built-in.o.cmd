cmd_net/8021q/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o net/8021q/built-in.o net/8021q/vlan_core.o ; scripts/mod/modpost net/8021q/built-in.o