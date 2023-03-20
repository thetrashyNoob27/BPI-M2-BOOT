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
	{ 0x86548b4c, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7bc4a278, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0xc68b7f, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x460969f4, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7537f3a2, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x963bcc3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x57a284dc, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd446305a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x11692767, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0xb77d50ff, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x9a60f80e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc59902f6, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x452b3b0a, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x501e6870, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xdfcb8e71, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0xf0abb8a3, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xfec874ee, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x188cb98b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x43dd6fd7, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x87d9f40f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5e427b94, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x37a6c62, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x858f12f1, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6df310a7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x8e31ce14, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x48eb5134, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x4e5b07a5, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("usb:v12D6p0444d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6D8E20813F6D59CD2696B3B");
