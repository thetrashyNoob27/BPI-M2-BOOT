cmd_net/netfilter/netfilter.o := /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o net/netfilter/netfilter.o net/netfilter/core.o net/netfilter/nf_log.o net/netfilter/nf_queue.o net/netfilter/nf_sockopt.o ; scripts/mod/modpost net/netfilter/netfilter.o