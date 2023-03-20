#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb98e78a1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb2059779, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4b6fbdfd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xf2c60324, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x45bb497a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8574ca6c, __VMLINUX_SYMBOL_STR(gpio_request_array) },
	{ 0x9dfdf722, __VMLINUX_SYMBOL_STR(gpio_free_array) },
	{ 0xe226f3c3, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x42129767, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x636933e6, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x86cc1565, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x31e45afb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x79c5a9f0, __VMLINUX_SYMBOL_STR(ioremap) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FF932D22211D288AEC459E9");
