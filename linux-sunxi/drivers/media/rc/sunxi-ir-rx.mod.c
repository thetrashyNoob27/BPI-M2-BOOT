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
	{ 0x56e52fb3, __VMLINUX_SYMBOL_STR(arisc_query_wakeup_source) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcfc0502, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x74d7c0dc, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x50b95842, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x96d600af, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x4b6fbdfd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x5d638d05, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0xe1d16e58, __VMLINUX_SYMBOL_STR(rc_map_unregister) },
	{ 0x599ee877, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfae51643, __VMLINUX_SYMBOL_STR(of_iomap) },
	{ 0x622cb874, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0xfc83f04a, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0xd247d7bf, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x5219e0f0, __VMLINUX_SYMBOL_STR(rc_keyup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2396c7f0, __VMLINUX_SYMBOL_STR(clk_set_parent) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x89c7e71d, __VMLINUX_SYMBOL_STR(of_clk_get) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xca9ea515, __VMLINUX_SYMBOL_STR(rc_map_register) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x15d69365, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2059779, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x527b8b37, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Callwinner,s_cir*");
MODULE_ALIAS("of:N*T*Callwinner,ir*");

MODULE_INFO(srcversion, "A488A13A708387068ED7967");
