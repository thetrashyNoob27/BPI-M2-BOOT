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
	{ 0x86809408, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xfb3e43f3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x3ef93483, __VMLINUX_SYMBOL_STR(usb_disable_lpm) },
	{ 0x632780, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xac1bdc8d, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0xff44a438, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x8e8cdce9, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x7c29b9fa, __VMLINUX_SYMBOL_STR(usb_enable_lpm) },
	{ 0x777790b5, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xbfa05ce0, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xa203e53a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xfd02e3d0, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3050fef0, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xa96b2f8e, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xcae84b25, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x1dff304f, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7004326e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x1457f200, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xba4aed98, __VMLINUX_SYMBOL_STR(usb_driver_set_configuration) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xc373ad5a, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x920c0215, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x87d9f40f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6df310a7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe5859848, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x9f00a624, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xe32d1a38, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0x799f9f63, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x336b0096, __VMLINUX_SYMBOL_STR(usb_queue_reset_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xad2a53fb, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xace32586, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x5200f351, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xd599071d, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0x289c4aa, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0x9a60f80e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xbcb5d5b8, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x122e9d0b, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x14475699, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x391256e9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x89f449af, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7af048df, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xbb3e1203, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfec874ee, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x43dd6fd7, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xc59902f6, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x37a6c62, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xb4a05945, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x48eb5134, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x7da4e478, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xedac7d2d, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "275BB427D5468F1A7C4952D");
