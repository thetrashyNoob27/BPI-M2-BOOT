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
	{ 0xba077299, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0xda7cd1c8, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x5d8f3a93, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xb03806bd, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x4961cc9b, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0x39ab37b1, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xe042c659, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x36c751dc, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf3a5144d, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x87c497fd, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x4a1fd7e0, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xc60c4678, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0x31d29c01, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xfb54347c, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0xf6ead810, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xd53eb7c6, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x205e59df, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x4e171913, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xa502126c, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x100370d0, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm6_tunnel";


MODULE_INFO(srcversion, "C15B2E736BD66F150276AF9");
