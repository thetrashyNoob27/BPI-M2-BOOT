cmd_kernel/locking/built-in.o :=  /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL   -r -o kernel/locking/built-in.o kernel/locking/mutex.o kernel/locking/semaphore.o kernel/locking/rwsem.o kernel/locking/percpu-rwsem.o kernel/locking/mutex-debug.o kernel/locking/spinlock.o kernel/locking/osq_lock.o kernel/locking/lglock.o kernel/locking/rtmutex.o kernel/locking/rwsem-xadd.o ; scripts/mod/modpost kernel/locking/built-in.o