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
	{ 0x67800702, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x6f55e817, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x82051f34, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x5021de71, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xbdbb0c9e, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x6ace144a, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xfb3e43f3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x4bd87ee2, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x9e434631, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x95ad6d38, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x3e6fedc, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xcf07bd68, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x3bf5f143, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xb216844a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf67111eb, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe8db776b, __VMLINUX_SYMBOL_STR(usbnet_status_stop) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xdc2b8000, __VMLINUX_SYMBOL_STR(usbnet_status_start) },
	{ 0xd17ceb3b, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xc24ba4bb, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6dfd8a66, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x920c0215, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5b6e26fd, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x64067fed, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3f7dd12f, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x14475699, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x43dd6fd7, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "896313DAA9C61C842F37412");
