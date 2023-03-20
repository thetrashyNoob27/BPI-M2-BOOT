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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x33d51ac7, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x568101dc, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xee9c3647, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x732fee65, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaed748d5, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2d7bcc81, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0xfdc7a5bb, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0xe8dbbcd, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x73518327, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1520b095, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x391256e9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x5078923c, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_defrag_ipv6,nf_defrag_ipv4";


MODULE_INFO(srcversion, "914333010E8661B1F1A25A5");
