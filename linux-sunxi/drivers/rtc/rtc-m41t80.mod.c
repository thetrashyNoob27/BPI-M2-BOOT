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
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc1b96174, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x9974da96, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xfd375a9, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x53ec4af5, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0x5ba938c, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xbd2b914f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x631ee43a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x45bb497a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf2c60324, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x7f921cac, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x443ed714, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x829a154a, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:m41t62");
MODULE_ALIAS("i2c:m41t65");
MODULE_ALIAS("i2c:m41t80");
MODULE_ALIAS("i2c:m41t81");
MODULE_ALIAS("i2c:m41t81s");
MODULE_ALIAS("i2c:m41t82");
MODULE_ALIAS("i2c:m41t83");
MODULE_ALIAS("i2c:m41st84");
MODULE_ALIAS("i2c:m41st85");
MODULE_ALIAS("i2c:m41st87");
MODULE_ALIAS("i2c:rv4162");

MODULE_INFO(srcversion, "AB7C67A1C3300361CC94EAF");
