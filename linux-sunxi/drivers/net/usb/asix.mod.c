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
	{ 0x37a6c62, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbfa05ce0, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcfb30c40, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0xd6b96582, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xfebb76b1, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd17ceb3b, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x5021de71, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xcf07bd68, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x202990c3, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x77981f5e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x5f9d739a, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xd25ca8f8, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x14475699, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x95ad6d38, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x62d965c, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x99ccc63, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xa203e53a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x912f5ad8, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0x3a640fe9, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x67800702, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc384257c, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0xace32586, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xfae072d9, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0x5b6e26fd, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3f7dd12f, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x9e434631, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x98eb5f34, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x161c0542, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0xbdbb0c9e, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x537544fd, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x6dfd8a66, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x6ace144a, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x819f2248, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x3bf5f143, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x3e6fedc, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x93cfcbf0, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x82051f34, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x43dd6fd7, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x706ff370, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0xfb3e43f3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9ea244ad, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x64067fed, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x64d6ee9e, __VMLINUX_SYMBOL_STR(phy_connect) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2cbe3552, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0x42dec9fa, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xde1896f2, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4bd87ee2, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xc24ba4bb, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x6f55e817, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xa1a54fc9, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6DC57650C94C15D43747D8F");
