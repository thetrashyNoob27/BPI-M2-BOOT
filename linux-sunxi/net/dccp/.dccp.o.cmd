cmd_net/dccp/dccp.o := /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o net/dccp/dccp.o net/dccp/ccid.o net/dccp/feat.o net/dccp/input.o net/dccp/minisocks.o net/dccp/options.o net/dccp/output.o net/dccp/proto.o net/dccp/timer.o net/dccp/qpolicy.o net/dccp/ccids/ccid2.o net/dccp/ackvec.o net/dccp/ccids/ccid3.o net/dccp/ccids/lib/tfrc.o net/dccp/ccids/lib/tfrc_equation.o net/dccp/ccids/lib/packet_history.o net/dccp/ccids/lib/loss_interval.o net/dccp/sysctl.o ; scripts/mod/modpost net/dccp/dccp.o