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
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xbc45e47b, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xe5a297c8, __VMLINUX_SYMBOL_STR(nf_ct_timeout_put_hook) },
	{ 0x3216f0cb, __VMLINUX_SYMBOL_STR(nf_ct_timeout_find_get_hook) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x51986a61, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x42f38fa9, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb216844a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdc8c8134, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2adec911, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x7cfd8c0, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xc4529a38, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_put) },
	{ 0x1419bbe5, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_find_get) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x1dd2d14, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbf328c0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


MODULE_INFO(srcversion, "1E0618D7D4B48B31B5F4D86");
