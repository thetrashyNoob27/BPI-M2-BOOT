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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x657610b1, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xab9db7cb, __VMLINUX_SYMBOL_STR(ion_unmap_kernel) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x74d7c0dc, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xda7c0b15, __VMLINUX_SYMBOL_STR(of_alias_get_id) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x31e45afb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x6f189d7a, __VMLINUX_SYMBOL_STR(ion_free) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4b6fbdfd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xba05683b, __VMLINUX_SYMBOL_STR(ion_map_kernel) },
	{ 0x5c87033c, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe9bff861, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfae51643, __VMLINUX_SYMBOL_STR(of_iomap) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x42129767, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x86cc1565, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x22df9a07, __VMLINUX_SYMBOL_STR(ion_alloc) },
	{ 0x27804afb, __VMLINUX_SYMBOL_STR(sunxi_ion_client_create) },
	{ 0x4ab7a3a0, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x89d9e693, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2396c7f0, __VMLINUX_SYMBOL_STR(clk_set_parent) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x5669fdd2, __VMLINUX_SYMBOL_STR(v4l2_subdev_init) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0xd0181486, __VMLINUX_SYMBOL_STR(ion_phys) },
	{ 0x1b68aba6, __VMLINUX_SYMBOL_STR(pin_config_set) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x636933e6, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x26714f2f, __VMLINUX_SYMBOL_STR(ion_client_destroy) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xfd294b84, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb2059779, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x8e659150, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xf315c552, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "28883AD135774BBA453BF77");
