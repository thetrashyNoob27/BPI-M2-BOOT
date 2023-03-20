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
	{ 0x95d5237e, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x16179ea4, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x6be4edf5, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x5894fb88, __VMLINUX_SYMBOL_STR(gameport_unregister_driver) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x23fbc63e, __VMLINUX_SYMBOL_STR(__gameport_register_driver) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x98c273a7, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x265069ca, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb5d991f9, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xc279e594, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x57674fd7, __VMLINUX_SYMBOL_STR(__sw_hweight16) },
	{ 0xdc3fcbc9, __VMLINUX_SYMBOL_STR(__sw_hweight8) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc0bf11da, __VMLINUX_SYMBOL_STR(gameport_open) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x436ac5cb, __VMLINUX_SYMBOL_STR(gameport_start_polling) },
	{ 0x533dce84, __VMLINUX_SYMBOL_STR(gameport_stop_polling) },
	{ 0xcce415ab, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf76b0a59, __VMLINUX_SYMBOL_STR(read_current_timer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71a3e16a, __VMLINUX_SYMBOL_STR(gameport_close) },
	{ 0xa343bcdb, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gameport";


MODULE_INFO(srcversion, "8E3BE29EB866577FEEB24A3");
