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
	{ 0x47a7db8a, __VMLINUX_SYMBOL_STR(of_clk_src_simple_get) },
	{ 0xff32ced8, __VMLINUX_SYMBOL_STR(of_clk_add_provider) },
	{ 0xa47a0db2, __VMLINUX_SYMBOL_STR(devm_clk_register) },
	{ 0x622cb874, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x3aa49187, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xf2c60324, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x8e3dad74, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x356461c8, __VMLINUX_SYMBOL_STR(rtc_time64_to_tm) },
	{ 0x4f2250ba, __VMLINUX_SYMBOL_STR(rtc_tm_to_time64) },
	{ 0x2b41d3fa, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x45bb497a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0x829a154a, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb80328f5, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pcf8563*");
MODULE_ALIAS("i2c:pcf8563");
MODULE_ALIAS("i2c:rtc8564");

MODULE_INFO(srcversion, "4FBFD38AFB51A6641EB7470");
