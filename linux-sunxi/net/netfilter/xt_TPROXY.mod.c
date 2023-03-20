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
	{ 0x4f4e0c43, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xafa6bdfc, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x1520b095, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x73518327, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0x5078923c, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0xdb2150df, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0xee9c3647, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd666ad96, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule_put) },
	{ 0xa10ebfcd, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0x257c4699, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x732fee65, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0xa9d618fd, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x71e006e9, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0x391256e9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x568101dc, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xfdc7a5bb, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_defrag_ipv6,nf_defrag_ipv4";


MODULE_INFO(srcversion, "8CC000D015F2730D68DD5D8");
