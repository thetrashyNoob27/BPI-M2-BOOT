cmd_net/phonet/phonet.o := /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o net/phonet/phonet.o net/phonet/pn_dev.o net/phonet/pn_netlink.o net/phonet/socket.o net/phonet/datagram.o net/phonet/sysctl.o net/phonet/af_phonet.o ; scripts/mod/modpost net/phonet/phonet.o