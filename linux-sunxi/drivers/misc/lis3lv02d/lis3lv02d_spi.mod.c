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
	{ 0x956a0959, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x79a08496, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x1e215cc5, __VMLINUX_SYMBOL_STR(lis3lv02d_init_dt) },
	{ 0xe59a8be5, __VMLINUX_SYMBOL_STR(lis3lv02d_init_device) },
	{ 0xabb1c89c, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xf9c0aea, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x51801283, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x7189e838, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf98ef602, __VMLINUX_SYMBOL_STR(lis3lv02d_remove_fs) },
	{ 0x7f4f473b, __VMLINUX_SYMBOL_STR(lis3lv02d_joystick_disable) },
	{ 0xea1c74de, __VMLINUX_SYMBOL_STR(lis3_dev) },
	{ 0x9c465025, __VMLINUX_SYMBOL_STR(lis3lv02d_poweroff) },
	{ 0x3f09ae15, __VMLINUX_SYMBOL_STR(lis3lv02d_poweron) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("of:N*T*Cst,lis302dl-spi*");

MODULE_INFO(srcversion, "03FD21E3554FA48421E4F9A");
