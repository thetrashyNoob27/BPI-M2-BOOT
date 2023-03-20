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
	{ 0x4880568e, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xafa6bdfc, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x1bdab4b4, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x3216f0cb, __VMLINUX_SYMBOL_STR(nf_ct_timeout_find_get_hook) },
	{ 0x1872e037, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0xa60c35cc, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x2f2c2c8a, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0x1701f7e4, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_free) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe16cafa2, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xee320e37, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe5a297c8, __VMLINUX_SYMBOL_STR(nf_ct_timeout_put_hook) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0xbf328c0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6211ef08, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "5717ACE89818674F287EFE4");
