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
	{ 0xf97333cd, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x44452faa, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x1e220d66, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0xed80f0a, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0xce6872de, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x20849343, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xea4dac47, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x332d11a1, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x50ec33ba, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0xb09e1de8, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0xd6cac9e8, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xc5acdbb5, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0x7a8ae336, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0x158f84d9, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0xaf9d1d6d, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x5d5006a, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0xf5622f2c, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x129bbd30, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0x489eda3a, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x3f3acc0, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x41de62df, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x77165968, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x8abb0bbd, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xa68dbb6f, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x5439bfa6, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x8e74e192, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0xe3baeb78, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod,raid456";


MODULE_INFO(srcversion, "CBE976C99267ADDF314F7A8");
