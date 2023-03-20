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
	{ 0xe1a7c55e, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1b442485, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe8dbbcd, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0xef583432, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x33d51ac7, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0xf315fec1, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x91929fbb, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xd84c1d89, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x8d730735, __VMLINUX_SYMBOL_STR(proc_set_user) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xfab98849, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xa502126c, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xdc3fcbc9, __VMLINUX_SYMBOL_STR(__sw_hweight8) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xaccabc6a, __VMLINUX_SYMBOL_STR(in4_pton) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe57878a1, __VMLINUX_SYMBOL_STR(in6_pton) },
	{ 0xa3131f6, __VMLINUX_SYMBOL_STR(strnchr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x9597bf5b, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x4a273b14, __VMLINUX_SYMBOL_STR(__seq_open_private) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A0710706D48CF0E56F79238");
