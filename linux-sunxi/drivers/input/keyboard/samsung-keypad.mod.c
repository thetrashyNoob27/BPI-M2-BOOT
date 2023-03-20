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
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x47620e99, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x265069ca, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xecce2dc9, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x3aa49187, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x72f719a, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x15817043, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0xddfdadfe, __VMLINUX_SYMBOL_STR(matrix_keypad_build_keymap) },
	{ 0x5e5ec7c7, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x3821d96d, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xe5e60ab3, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x1201746, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xdb281a14, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xa9c8a28, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xc491793, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x1ba46c0d, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x50b95842, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xcce415ab, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xa343bcdb, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x3df5ebb5, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x34713f0b, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe11b979b, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xf3bcae97, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=matrix-keymap";

MODULE_ALIAS("platform:samsung-keypad");
MODULE_ALIAS("platform:s5pv210-keypad");
MODULE_ALIAS("of:N*T*Csamsung,s3c6410-keypad*");
MODULE_ALIAS("of:N*T*Csamsung,s5pv210-keypad*");

MODULE_INFO(srcversion, "AD4B7744070173312AC4FCD");
