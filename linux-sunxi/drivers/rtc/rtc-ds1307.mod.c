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
	{ 0xd683930f, __VMLINUX_SYMBOL_STR(i2c_smbus_write_i2c_block_data) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x45bb497a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1050618e, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x3aa49187, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xf2c60324, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x8e3dad74, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0xc7fd32a0, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0xa9c8a28, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x50b95842, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2b41d3fa, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0x631ee43a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x7f921cac, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x946698fb, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ds1307");
MODULE_ALIAS("i2c:ds1337");
MODULE_ALIAS("i2c:ds1338");
MODULE_ALIAS("i2c:ds1339");
MODULE_ALIAS("i2c:ds1388");
MODULE_ALIAS("i2c:ds1340");
MODULE_ALIAS("i2c:ds3231");
MODULE_ALIAS("i2c:m41t00");
MODULE_ALIAS("i2c:mcp7940x");
MODULE_ALIAS("i2c:mcp7941x");
MODULE_ALIAS("i2c:pt7c4338");
MODULE_ALIAS("i2c:rx8025");

MODULE_INFO(srcversion, "9FF71F16760BBA6EBB9EB93");