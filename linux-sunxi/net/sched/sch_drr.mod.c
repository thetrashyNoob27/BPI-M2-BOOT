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
	{ 0xf53d4c26, __VMLINUX_SYMBOL_STR(qdisc_class_hash_destroy) },
	{ 0x77039206, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x17b1125d, __VMLINUX_SYMBOL_STR(gen_kill_estimator) },
	{ 0x1c81ee3a, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x10ec5b9, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x641b6d8a, __VMLINUX_SYMBOL_STR(qdisc_class_hash_grow) },
	{ 0xa04a01bd, __VMLINUX_SYMBOL_STR(qdisc_class_hash_insert) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1267e51b, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbd17c6de, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x904f0a23, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x1035b11f, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x6450acbc, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6bdcfd99, __VMLINUX_SYMBOL_STR(qdisc_class_hash_remove) },
	{ 0x5f7e1250, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xb216844a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8a7a5625, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
	{ 0xdf9616f9, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0xbfba25a, __VMLINUX_SYMBOL_STR(gnet_stats_copy_rate_est) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1bbd40fe, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5c3df1fd, __VMLINUX_SYMBOL_STR(qdisc_warn_nonwc) },
	{ 0x117093be, __VMLINUX_SYMBOL_STR(qdisc_class_hash_init) },
	{ 0x1ce0640f, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6CE12219A6FE5ED87BAC6D2");
