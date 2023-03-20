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
	{ 0x5adbe15c, __VMLINUX_SYMBOL_STR(dev_pm_set_wake_irq) },
	{ 0x11accf13, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0x89d9e693, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x3aa49187, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xf2c60324, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x4d734139, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0xf9c0aea, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0x2b41d3fa, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0x843a6aa9, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x3111043d, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5bb0cd2b, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x501eb227, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x261d509b, __VMLINUX_SYMBOL_STR(device_remove_bin_file) },
	{ 0x657610b1, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x8d944b7a, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0x3df5ebb5, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xc765fe1, __VMLINUX_SYMBOL_STR(dev_pm_clear_wake_irq) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:ds1343");
MODULE_ALIAS("spi:ds1344");

MODULE_INFO(srcversion, "AA727A192638107434CFA82");
