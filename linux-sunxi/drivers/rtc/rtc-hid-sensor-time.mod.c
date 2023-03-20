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
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf2c60324, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7ce5c4fb, __VMLINUX_SYMBOL_STR(sensor_hub_device_open) },
	{ 0x4d96a28b, __VMLINUX_SYMBOL_STR(sensor_hub_register_callback) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xca4310cf, __VMLINUX_SYMBOL_STR(sensor_hub_input_get_attribute_info) },
	{ 0x6681fce7, __VMLINUX_SYMBOL_STR(hid_sensor_parse_common_attributes) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcb466063, __VMLINUX_SYMBOL_STR(wait_for_completion_killable_timeout) },
	{ 0x7232424d, __VMLINUX_SYMBOL_STR(sensor_hub_input_attr_get_raw_value) },
	{ 0xd7b45cbc, __VMLINUX_SYMBOL_STR(sensor_hub_remove_callback) },
	{ 0x7e1e7564, __VMLINUX_SYMBOL_STR(sensor_hub_device_close) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-hub,hid-sensor-iio-common";

MODULE_ALIAS("platform:HID-SENSOR-2000a0");

MODULE_INFO(srcversion, "F91C4EBE3337E56A49C3BCB");
