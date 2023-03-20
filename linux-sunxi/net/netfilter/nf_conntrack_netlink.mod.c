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
	{ 0xef583432, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xf315fec1, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbc45e47b, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x51986a61, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x9e51f7e, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x11bdb5aa, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0x3372388b, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0x264adf9d, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xe16cafa2, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xa60c35cc, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x2d57dc76, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x6c8ef667, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x7cfd8c0, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x3f1c60e3, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0xb102212f, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0xdc8c8134, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x68360a69, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x21e0127e, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xe91f073b, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x40a0f9ad, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0xc4a9b485, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x282adad1, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xc2abd2fd, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xfb180022, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf1b8d528, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xa460271b, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x42f38fa9, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x750ae769, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2ca31f6c, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0xcf30b131, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0x5b4ef5f, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb216844a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x98c4c663, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0x22452f74, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0x2adec911, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0xdb5e60a7, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x592fd5a1, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x1872e037, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x17bcc34e, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0xd3847167, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


MODULE_INFO(srcversion, "D681B62CCD89B4C353DF289");
