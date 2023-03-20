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
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x42ee4782, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xb2059779, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x6588ee01, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfc9ac5e1, __VMLINUX_SYMBOL_STR(sysfs_add_file_to_group) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc969012a, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x2358f3ca, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xd7a0c473, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x3ca81ceb, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xb1fbfbf1, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xfd294b84, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x20a3c5db, __VMLINUX_SYMBOL_STR(mutex_destroy) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7f63957f, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x14f2127e, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x4b6fbdfd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xde26af42, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x622cb874, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x50b95842, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x58bb4334, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x636933e6, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x86cc1565, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x42129767, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x1b68aba6, __VMLINUX_SYMBOL_STR(pin_config_set) },
	{ 0xe226f3c3, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x31e45afb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9E386088FCB2B6464E0B409");
