cmd_kernel/sched/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o kernel/sched/built-in.o kernel/sched/core.o kernel/sched/loadavg.o kernel/sched/clock.o kernel/sched/cputime.o kernel/sched/idle_task.o kernel/sched/fair.o kernel/sched/rt.o kernel/sched/deadline.o kernel/sched/stop_task.o kernel/sched/wait.o kernel/sched/completion.o kernel/sched/idle.o kernel/sched/cpupri.o kernel/sched/cpudeadline.o kernel/sched/energy.o kernel/sched/auto_group.o kernel/sched/stats.o kernel/sched/cpuacct.o ; scripts/mod/modpost kernel/sched/built-in.o