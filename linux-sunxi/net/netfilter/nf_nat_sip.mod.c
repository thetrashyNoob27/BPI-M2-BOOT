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
	{ 0x16a57d28, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x40a0345b, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x3e33cae7, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x33198b5f, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xc860708f, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0x3fe6dd56, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0x8dfe7e7, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x6690506f, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0xbf56cd12, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0xe8f3f06b, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x67d950fe, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x21e0127e, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3e438f8b, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0x20f5f6a3, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x3693ff81, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xc0a7e92e, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5d51614b, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";


MODULE_INFO(srcversion, "4473DC33407AFAE86A62D7E");
