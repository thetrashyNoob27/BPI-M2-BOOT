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
	{ 0xcc3a1dc, __VMLINUX_SYMBOL_STR(dev_mc_sync_multiple) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x37a6c62, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xda285e6e, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x44ff7f94, __VMLINUX_SYMBOL_STR(dev_disable_lro) },
	{ 0xd8821230, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x2d9f016c, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x1b56c75d, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0xff44a438, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf67111eb, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x920c0215, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xf372b782, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x727722c1, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x1e93beb, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x14475699, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x242acfff, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xf8bb72a6, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0x72920a14, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0xe60499fb, __VMLINUX_SYMBOL_STR(vlan_vids_del_by_dev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb216844a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd8991679, __VMLINUX_SYMBOL_STR(vlan_vids_add_by_dev) },
	{ 0xd285cc9c, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0xce20d0f3, __VMLINUX_SYMBOL_STR(netdev_change_features) },
	{ 0xee75e832, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc99085c7, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x86809408, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xef60a165, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0xb4a05945, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xeef758f5, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x96ffb08a, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xecab22aa, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xf4f14de6, __VMLINUX_SYMBOL_STR(rtnl_trylock) },
	{ 0xdc8c8134, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x7e517eaf, __VMLINUX_SYMBOL_STR(dev_mc_flush) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x46f19b01, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x357a65b0, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xad0294cd, __VMLINUX_SYMBOL_STR(dev_uc_flush) },
	{ 0xbf328c0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x34786e7, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x4cda2473, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd6c867eb, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0x43dd6fd7, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xe02d314d, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x7fc35c4f, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xfec874ee, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xba0bd727, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd702d06, __VMLINUX_SYMBOL_STR(dev_uc_sync_multiple) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x34b306a8, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x55d4d572, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xe13e9a1d, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2adec911, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x50f17f37, __VMLINUX_SYMBOL_STR(__netpoll_cleanup) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0x1dd2d14, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x306c8a84, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B39CC42D47D6182D3D5AFAE");
