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
	{ 0x4880568e, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfaa822d8, __VMLINUX_SYMBOL_STR(xt_check_target) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xea76a8bc, __VMLINUX_SYMBOL_STR(audit_log_start) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x24457174, __VMLINUX_SYMBOL_STR(audit_enabled) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1bdab4b4, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0xbf328c0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xff83735e, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0xeaad0027, __VMLINUX_SYMBOL_STR(xt_request_find_match) },
	{ 0xfc4ef839, __VMLINUX_SYMBOL_STR(xt_request_find_target) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf1fc6e18, __VMLINUX_SYMBOL_STR(xt_check_match) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xeb37101c, __VMLINUX_SYMBOL_STR(audit_log_end) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd23e98f5, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x1dd2d14, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xd0f36f0d, __VMLINUX_SYMBOL_STR(audit_log_format) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7E51F11B3BAD5EF6ABB34E0");
