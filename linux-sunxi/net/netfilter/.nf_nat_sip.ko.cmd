cmd_net/netfilter/nf_nat_sip.ko := /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/netfilter/nf_nat_sip.ko net/netfilter/nf_nat_sip.o net/netfilter/nf_nat_sip.mod.o