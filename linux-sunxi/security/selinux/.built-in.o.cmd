cmd_security/selinux/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o security/selinux/built-in.o security/selinux/selinux.o ; scripts/mod/modpost security/selinux/built-in.o