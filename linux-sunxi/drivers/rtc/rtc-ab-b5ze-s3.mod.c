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
	{ 0x9974da96, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xfd375a9, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xf2c60324, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x3aa49187, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xcd1b90d9, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x2b41d3fa, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0x501eb227, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x356461c8, __VMLINUX_SYMBOL_STR(rtc_time64_to_tm) },
	{ 0x4f2250ba, __VMLINUX_SYMBOL_STR(rtc_tm_to_time64) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0x3111043d, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5bb0cd2b, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8a784fc1, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x3df5ebb5, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:abb5zes3");
MODULE_ALIAS("of:N*T*Cabracon,abb5zes3*");

MODULE_INFO(srcversion, "60863A7F3A3D002E3E9F5A2");
