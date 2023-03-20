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
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1050618e, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0xf2c60324, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb7007dad, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x1201746, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x946698fb, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmaxim,ds1742*");

MODULE_INFO(srcversion, "B23576C332777FB42008BC4");
