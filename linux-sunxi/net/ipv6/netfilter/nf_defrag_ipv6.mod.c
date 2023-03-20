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
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0xb34bab3, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0xd74289f9, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0xcfefe1e, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa79bd776, __VMLINUX_SYMBOL_STR(ip6_expire_frag_queue) },
	{ 0xf7e32a9d, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf67111eb, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8b9ea2a9, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x2778dc5f, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xef583432, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0x4cad79ed, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x43bcd05, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x965a6b6e, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbe9ee492, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x8626f1f4, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0xf315fec1, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x122e9d0b, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xef2fdc4f, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0xb9bd2117, __VMLINUX_SYMBOL_STR(ip6_frag_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcd4b4144, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xc8a15f2f, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8d15bfcc, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xb3348446, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x391256e9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x23803e25, __VMLINUX_SYMBOL_STR(ip6_frag_match) },
	{ 0xd966ddc2, __VMLINUX_SYMBOL_STR(__do_once_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "132C7B37812C820CB99CFBE");
