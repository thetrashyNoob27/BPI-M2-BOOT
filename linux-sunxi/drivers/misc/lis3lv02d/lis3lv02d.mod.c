#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb98e78a1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe11b979b, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x34713f0b, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x81f56b6, __VMLINUX_SYMBOL_STR(input_unregister_polled_device) },
	{ 0xb2987c46, __VMLINUX_SYMBOL_STR(param_get_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x277852ad, __VMLINUX_SYMBOL_STR(pm_runtime_barrier) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xc1b96174, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xeea3e154, __VMLINUX_SYMBOL_STR(input_register_polled_device) },
	{ 0x50b95842, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf3bcae97, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x65f4e7a4, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x4be62494, __VMLINUX_SYMBOL_STR(param_set_int) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x899c85fd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xb5d991f9, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xcce415ab, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x5ba938c, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbd2b914f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xd8785235, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x15817043, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x14f2127e, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x19ace329, __VMLINUX_SYMBOL_STR(input_free_polled_device) },
	{ 0xecce2dc9, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x965ab1b, __VMLINUX_SYMBOL_STR(pm_schedule_suspend) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x6cb303fc, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xe3760e2f, __VMLINUX_SYMBOL_STR(input_allocate_polled_device) },
	{ 0xc491793, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x16179ea4, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x417723d0, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x53ec4af5, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BC18C9C21231F91324B09FF");
