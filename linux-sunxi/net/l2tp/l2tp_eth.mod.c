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
	{ 0x4bd87ee2, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xd96bdafd, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc526100e, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x3612388d, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x2e7a1bda, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0xe02d314d, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x865d350f, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xb4149d79, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x2de4cd6d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0xbf328c0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x48eb5134, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x255d1511, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0xb4a05945, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x90a8670b, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xcae84b25, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x3500abf3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x5591dcbc, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x90c3e7f0, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xbd5b9b04, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x2bbbc88b, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_netlink,l2tp_core";


MODULE_INFO(srcversion, "CEC8C430EAC355F57639AFC");
