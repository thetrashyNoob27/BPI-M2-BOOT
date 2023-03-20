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
	{ 0x61d8fdcd, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0xdc110b9a, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdc6c76da, __VMLINUX_SYMBOL_STR(inet_diag_bc_sk) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xdc8c8134, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x894e7905, __VMLINUX_SYMBOL_STR(inet_sk_diag_fill) },
	{ 0x272b7d28, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x598cd828, __VMLINUX_SYMBOL_STR(udp_table) },
	{ 0xa0786de, __VMLINUX_SYMBOL_STR(udplite_table) },
	{ 0xe48baf42, __VMLINUX_SYMBOL_STR(sock_diag_destroy) },
	{ 0x257c4699, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xf1e977dd, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x10434573, __VMLINUX_SYMBOL_STR(__udp6_lib_lookup) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xea3c8985, __VMLINUX_SYMBOL_STR(__udp4_lib_lookup) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "FC49014FC05C21B36700172");
