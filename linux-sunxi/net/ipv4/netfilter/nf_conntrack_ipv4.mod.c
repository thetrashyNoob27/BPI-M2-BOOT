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
	{ 0x9c9ec2a0, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x724c2d61, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0xdb5e60a7, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x74811929, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x3a34bec7, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xaabda930, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xda20ccf0, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0x769bac48, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0x1569a185, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xd662c386, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xb6b4d934, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x698a4977, __VMLINUX_SYMBOL_STR(print_tuple) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x67ea07df, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0xef583432, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xb976bc54, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x5838e543, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd633586a, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2797ff41, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x104a4acb, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0xd19d1a53, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0xa1fafc40, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x965a6b6e, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0x910acb00, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0xff83735e, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x592fd5a1, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x1ec86667, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0xf315fec1, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xebaa1d1, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e9e8c8b, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xc8a15f2f, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xf38bcdf3, __VMLINUX_SYMBOL_STR(nf_conntrack_max) },
	{ 0x8998396a, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0x6eb190d1, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd23e98f5, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x391256e9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x42ba2fe7, __VMLINUX_SYMBOL_STR(seq_print_acct) },
	{ 0x5f83f2b8, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x282adad1, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x1872e037, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";


MODULE_INFO(srcversion, "D4F827E6604B9D2989C05D8");