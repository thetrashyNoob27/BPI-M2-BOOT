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
	{ 0xd6b96582, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x98eb5f34, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x77981f5e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xd17ceb3b, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x67800702, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x6f55e817, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x82051f34, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x5021de71, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xbdbb0c9e, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x6ace144a, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x64067fed, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0xfb3e43f3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x9e434631, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x95ad6d38, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x3e6fedc, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xace32586, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5b6e26fd, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x43dd6fd7, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x9ea244ad, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xcf07bd68, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xc24ba4bb, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x6dfd8a66, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x5f9d739a, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x3f7dd12f, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0xde1896f2, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbfa05ce0, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x93cfcbf0, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb216844a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x14475699, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x537544fd, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9188BA9738A6BCF0D399BC5");
