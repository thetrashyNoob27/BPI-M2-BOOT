cmd_net/llc/llc2.o := /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o net/llc/llc2.o net/llc/llc_if.o net/llc/llc_c_ev.o net/llc/llc_c_ac.o net/llc/llc_conn.o net/llc/llc_c_st.o net/llc/llc_pdu.o net/llc/llc_sap.o net/llc/llc_s_ac.o net/llc/llc_s_ev.o net/llc/llc_s_st.o net/llc/af_llc.o net/llc/llc_station.o net/llc/llc_proc.o net/llc/sysctl_net_llc.o ; scripts/mod/modpost net/llc/llc2.o