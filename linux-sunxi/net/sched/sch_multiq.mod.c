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
	{ 0x458a0cec, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xe1fb2418, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdf9616f9, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x1bbd40fe, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x1c81ee3a, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x10ec5b9, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0x1ce0640f, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x77039206, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x1035b11f, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x904f0a23, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x6450acbc, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x1267e51b, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x5f7e1250, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb216844a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "63ECF69166C9876D0A1F84D");
