cmd_net/8021q/8021q.o := /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o net/8021q/8021q.o net/8021q/vlan.o net/8021q/vlan_dev.o net/8021q/vlan_netlink.o net/8021q/vlan_gvrp.o net/8021q/vlan_mvrp.o net/8021q/vlanproc.o ; scripts/mod/modpost net/8021q/8021q.o