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
	{ 0x95d5237e, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x77981f5e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xd17ceb3b, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x161c0542, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x67800702, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x6f55e817, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x82051f34, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x3f7dd12f, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
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
	{ 0x3bf5f143, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xf67111eb, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xb216844a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x98eb5f34, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5b6e26fd, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd6b96582, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x37a6c62, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xace32586, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7a4cdb90, __VMLINUX_SYMBOL_STR(usbnet_defer_kevent) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x64067fed, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0xbfa05ce0, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x93cfcbf0, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6dfd8a66, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x5479505c, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0xc24ba4bb, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x8d8a8216, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8ffdb3b8, __VMLINUX_SYMBOL_STR(crc16) },
	{ 0x5f9d739a, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xfec874ee, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xc373ad5a, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x14475699, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x537544fd, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5022B187BED47F956F373AA");
