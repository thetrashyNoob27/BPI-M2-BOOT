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
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe59a8be5, __VMLINUX_SYMBOL_STR(lis3lv02d_init_device) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x1e215cc5, __VMLINUX_SYMBOL_STR(lis3lv02d_init_dt) },
	{ 0xabb1c89c, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xea1c74de, __VMLINUX_SYMBOL_STR(lis3_dev) },
	{ 0xf98ef602, __VMLINUX_SYMBOL_STR(lis3lv02d_remove_fs) },
	{ 0x7f4f473b, __VMLINUX_SYMBOL_STR(lis3lv02d_joystick_disable) },
	{ 0x9c465025, __VMLINUX_SYMBOL_STR(lis3lv02d_poweroff) },
	{ 0x3f09ae15, __VMLINUX_SYMBOL_STR(lis3lv02d_poweron) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc7fd32a0, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0x7f921cac, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x631ee43a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("i2c:lis3lv02d");
MODULE_ALIAS("i2c:lis331dlh");
MODULE_ALIAS("of:N*T*Cst,lis3lv02d*");

MODULE_INFO(srcversion, "7E0E8EBC8BDE0204D5ADDA1");
