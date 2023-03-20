cmd_arch/arm/boot/uImage := /bin/bash ./scripts/mkuboot.sh -A arm -O linux -C none  -T kernel -a 0x40008000 -e 0x40008000 -n 'Linux-4.4.55-BPI-M2P-Kernel' -d arch/arm/boot/zImage arch/arm/boot/uImage
