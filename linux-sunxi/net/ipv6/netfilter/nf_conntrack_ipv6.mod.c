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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x724c2d61, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x74811929, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x3a34bec7, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0xaabda930, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x769bac48, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xb6b4d934, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x67ea07df, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0xef583432, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xb976bc54, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x5838e543, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd633586a, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x104a4acb, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0xa1fafc40, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x965a6b6e, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xaed748d5, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xff83735e, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x275fc307, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp6) },
	{ 0x1ec86667, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0xf315fec1, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xebaa1d1, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x6211ef08, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0xc8a15f2f, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x8998396a, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd23e98f5, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x5c87f253, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp6) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x391256e9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xad632695, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x5f83f2b8, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x282adad1, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x1872e037, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv6";


MODULE_INFO(srcversion, "5E49137AA48744BD7B56C0A");
