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
	{ 0x1d77b0f8, __VMLINUX_SYMBOL_STR(unix_socket_table) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x7c6a49ce, __VMLINUX_SYMBOL_STR(unix_table_lock) },
	{ 0xc1d6ac3, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf5eb199f, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x624c5fd, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0xb216844a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x65360263, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xf31ed237, __VMLINUX_SYMBOL_STR(unix_peer_get) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x257c4699, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xdc8c8134, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x94d85dd5, __VMLINUX_SYMBOL_STR(unix_inq_len) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf1e977dd, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0xe43b2cc, __VMLINUX_SYMBOL_STR(unix_outq_len) },
	{ 0x565ab270, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2167db87, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x2adec911, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x42f38fa9, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6E35F8A8FEA5C2B92E90D4C");
