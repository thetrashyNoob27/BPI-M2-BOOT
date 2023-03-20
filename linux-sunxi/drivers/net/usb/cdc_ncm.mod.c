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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x67617978, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd2c1c2f4, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0xd6b96582, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5d153a7a, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0xd17ceb3b, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x5021de71, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xcf07bd68, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x11025677, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x77981f5e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x14475699, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x95ad6d38, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x62d965c, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x95d5237e, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa203e53a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xd599071d, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x67800702, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x9955a327, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xcae1d21d, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd860d4eb, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x3f7dd12f, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9e434631, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x98eb5f34, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x161c0542, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xbdbb0c9e, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x6dfd8a66, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x45bb497a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6ace144a, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x867d0558, __VMLINUX_SYMBOL_STR(cdc_parse_cdc_header) },
	{ 0xb1e7f917, __VMLINUX_SYMBOL_STR(usbnet_get_ethernet_addr) },
	{ 0x3bf5f143, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xc46db083, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x3e6fedc, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x82051f34, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x706ff370, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0xfb3e43f3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x192441c6, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd7767f91, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4bd87ee2, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x5916aa07, __VMLINUX_SYMBOL_STR(usbnet_manage_power) },
	{ 0xc24ba4bb, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x6f55e817, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "395D1165DB159FE60C9342B");
