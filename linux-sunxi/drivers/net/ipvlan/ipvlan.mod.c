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
	{ 0xfd31f1ba, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb4149d79, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xda285e6e, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0xa944a965, __VMLINUX_SYMBOL_STR(ip_local_out) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf7f22c57, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x2d9f016c, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x2de4cd6d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf67111eb, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xf372b782, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x727722c1, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf8bb72a6, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xd446305a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x86809408, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xef60a165, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0xb4a05945, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xeef758f5, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x39a673b, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x46f19b01, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x94e8489c, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0xd0302bba, __VMLINUX_SYMBOL_STR(ip6_route_output_flags) },
	{ 0x4a2996b0, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x4cda2473, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x976fd9ac, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xac010aa0, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0x43dd6fd7, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x83b58460, __VMLINUX_SYMBOL_STR(netdev_features_change) },
	{ 0xe02d314d, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x7fc35c4f, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xe8974134, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xbdb9d8fc, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x981cb11d, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x55d4d572, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x89048f90, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x16facda, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe505cfb2, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xe13e9a1d, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xb8bd9391, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xd966ddc2, __VMLINUX_SYMBOL_STR(__do_once_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3C0619A0254F48FFB038649");
