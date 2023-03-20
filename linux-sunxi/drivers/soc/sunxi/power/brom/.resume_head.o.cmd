cmd_drivers/soc/sunxi/power/brom/resume_head.o := /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc -Wp,-MD,drivers/soc/sunxi/power/brom/.resume_head.o.d -nostdinc -isystem /mnt/thinker1000/programming/bananaPi_M2_Zero/BPI-M2-BOOT/toolchains/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/7.3.1/include -I./arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-sunxi/include -I. -g -c -nostdlib -march=armv7-a -marm -fno-unwind-tables -fno-asynchronous-unwind-tables -mlittle-endian -O2    -D"KBUILD_STR(s)=#s" -D"KBUILD_BASENAME=KBUILD_STR(resume_head)"  -D"KBUILD_MODNAME=KBUILD_STR(resume_head)" -c -o drivers/soc/sunxi/power/brom/.tmp_resume_head.o drivers/soc/sunxi/power/brom/resume_head.c

source_drivers/soc/sunxi/power/brom/resume_head.o := drivers/soc/sunxi/power/brom/resume_head.c

deps_drivers/soc/sunxi/power/brom/resume_head.o := \
  drivers/soc/sunxi/power/brom/./resumes.h \
  drivers/soc/sunxi/power/brom/./resumes_assembler.h \

drivers/soc/sunxi/power/brom/resume_head.o: $(deps_drivers/soc/sunxi/power/brom/resume_head.o)

$(deps_drivers/soc/sunxi/power/brom/resume_head.o):
