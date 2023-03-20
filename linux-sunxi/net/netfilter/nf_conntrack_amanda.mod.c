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
	{ 0x332477aa, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x74811929, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xad911aeb, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x47a35513, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd314344e, __VMLINUX_SYMBOL_STR(textsearch_prepare) },
	{ 0x9b207889, __VMLINUX_SYMBOL_STR(skb_find_text) },
	{ 0x6be4edf5, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa460271b, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xc4a9b485, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x21e0127e, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe8f3f06b, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x397f942e, __VMLINUX_SYMBOL_STR(textsearch_destroy) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe1a7c55e, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x391256e9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "B72FDD6A9920EF8993EB46F");
