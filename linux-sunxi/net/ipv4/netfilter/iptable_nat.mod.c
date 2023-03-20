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
	{ 0x965a6b6e, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xef583432, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xc8a15f2f, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xf315fec1, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x31f4307c, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0xab5d0c43, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xc81d8a87, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0xa6605ff1, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0x7e621b20, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0xafc6d2e3, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0xdceed6ad, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x935180ce, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat_ipv4";


MODULE_INFO(srcversion, "0ABBEAA64C52C3302A03BE4");
