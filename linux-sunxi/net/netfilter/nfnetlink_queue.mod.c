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
	{ 0xd19d1a53, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xbc45e47b, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xd7ea7094, __VMLINUX_SYMBOL_STR(nf_unregister_queue_handler) },
	{ 0x14aea5d4, __VMLINUX_SYMBOL_STR(nf_register_queue_handler) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xef583432, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0x51986a61, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0xf315fec1, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x6bc236b6, __VMLINUX_SYMBOL_STR(nf_queue_entry_release_refs) },
	{ 0x900008c3, __VMLINUX_SYMBOL_STR(nf_queue_entry_get_refs) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x89f449af, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e9e8c8b, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x537544fd, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x33198b5f, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xcd4b4144, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xbf328c0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1dd2d14, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x4f921c6c, __VMLINUX_SYMBOL_STR(nfnetlink_unicast) },
	{ 0xd84c1d89, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x48051a1c, __VMLINUX_SYMBOL_STR(nfnl_ct_hook) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xbbc6fbfd, __VMLINUX_SYMBOL_STR(skb_zerocopy) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa098ab52, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0x676aaed1, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbac3cbf2, __VMLINUX_SYMBOL_STR(ns_to_timespec64) },
	{ 0x222f6207, __VMLINUX_SYMBOL_STR(__nla_reserve) },
	{ 0x2adec911, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbcb5d5b8, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1241655e, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0xd60209b2, __VMLINUX_SYMBOL_STR(__netlink_alloc_skb) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x98d7929a, __VMLINUX_SYMBOL_STR(skb_zerocopy_headlen) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf675d841, __VMLINUX_SYMBOL_STR(nf_reinject) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "A16316EB45A58EB739E261A");
