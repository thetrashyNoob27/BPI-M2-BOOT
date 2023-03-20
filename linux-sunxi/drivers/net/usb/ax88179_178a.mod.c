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
	{ 0x77981f5e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xd17ceb3b, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x86809408, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x67800702, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x6f55e817, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x82051f34, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x6ace144a, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xfb3e43f3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x9e434631, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x95ad6d38, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x3e6fedc, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x98eb5f34, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x5b6e26fd, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xace32586, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xff44a438, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9ea244ad, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x37a6c62, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xd6b96582, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcf07bd68, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x62d965c, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc24ba4bb, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x8d8a8216, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6dfd8a66, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x5479505c, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0xfec874ee, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x5f9d739a, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x434aa70f, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0xbfa05ce0, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x3bf5f143, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xf67111eb, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb216844a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x14475699, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x122e9d0b, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4C676DD260D26D648107038");
