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
	{ 0x46f19b01, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xe1844ed8, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x55d4d572, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xac7eadfa, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xe505cfb2, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0xd0302bba, __VMLINUX_SYMBOL_STR(ip6_route_output_flags) },
	{ 0x7493d364, __VMLINUX_SYMBOL_STR(inet_select_addr) },
	{ 0x2de4cd6d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xbdb9d8fc, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x1099ad0c, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0xeef758f5, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4cda2473, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xd285cc9c, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0x2d9f016c, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x43dd6fd7, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xac261fb5, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0xb4a05945, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xe02d314d, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x90318f49, __VMLINUX_SYMBOL_STR(fib6_get_table) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xcac67d33, __VMLINUX_SYMBOL_STR(dst_destroy) },
	{ 0xeac25a1c, __VMLINUX_SYMBOL_STR(dst_alloc) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x8b9ea2a9, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xc8276a79, __VMLINUX_SYMBOL_STR(nf_hooks_needed) },
	{ 0xa6febd06, __VMLINUX_SYMBOL_STR(nd_tbl) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9e50ebd, __VMLINUX_SYMBOL_STR(arp_tbl) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xe13e9a1d, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc87093eb, __VMLINUX_SYMBOL_STR(__neigh_create) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa24a5d58, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x1bb996e, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa944a965, __VMLINUX_SYMBOL_STR(ip_local_out) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x391256e9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x29b3a528, __VMLINUX_SYMBOL_STR(fib_select_path) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x497816d1, __VMLINUX_SYMBOL_STR(fib_table_lookup) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x1d5e9abe, __VMLINUX_SYMBOL_STR(__fib_lookup) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfd31f1ba, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xe8974134, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0ECD39D85A25663008B7D41");
