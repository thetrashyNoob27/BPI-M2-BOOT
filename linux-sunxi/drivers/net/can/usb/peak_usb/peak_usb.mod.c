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
	{ 0x460969f4, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb77d50ff, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0xb346573b, __VMLINUX_SYMBOL_STR(can_dlc2len) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xcbb8d5cb, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7537f3a2, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x452b3b0a, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x11692767, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0xd446305a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc68b7f, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x9a60f80e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e31ce14, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x86548b4c, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x2192a71a, __VMLINUX_SYMBOL_STR(can_change_state) },
	{ 0x45bb497a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x35f932, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0xc59902f6, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x57a284dc, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x963bcc3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x43dd6fd7, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x7bc4a278, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xfec874ee, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x9d37d074, __VMLINUX_SYMBOL_STR(alloc_canfd_skb) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x48eb5134, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x222c295a, __VMLINUX_SYMBOL_STR(can_len2dlc) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x5e427b94, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xdfcb8e71, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x501e6870, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0x6df310a7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf0abb8a3, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x87d9f40f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0011d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "620BD4851495119E56C8A91");
