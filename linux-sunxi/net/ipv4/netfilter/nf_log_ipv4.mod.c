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
	{ 0xd40b9308, __VMLINUX_SYMBOL_STR(nf_log_unregister) },
	{ 0xef583432, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc229f64c, __VMLINUX_SYMBOL_STR(nf_log_register) },
	{ 0xf315fec1, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x80c68137, __VMLINUX_SYMBOL_STR(nf_log_buf_close) },
	{ 0x67d857ef, __VMLINUX_SYMBOL_STR(nf_log_dump_packet_common) },
	{ 0xd4961de, __VMLINUX_SYMBOL_STR(nf_log_buf_open) },
	{ 0x1481ce47, __VMLINUX_SYMBOL_STR(nf_log_set) },
	{ 0xa6f10b47, __VMLINUX_SYMBOL_STR(nf_log_unset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x50ccb0d3, __VMLINUX_SYMBOL_STR(nf_log_dump_udp_header) },
	{ 0xb5b2a4bc, __VMLINUX_SYMBOL_STR(nf_log_dump_sk_uid_gid) },
	{ 0x6546385a, __VMLINUX_SYMBOL_STR(nf_log_dump_tcp_header) },
	{ 0x391256e9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x487c5d33, __VMLINUX_SYMBOL_STR(nf_log_buf_add) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_log_common";


MODULE_INFO(srcversion, "A9ADCDB93C5B6DFD51F3DF2");
