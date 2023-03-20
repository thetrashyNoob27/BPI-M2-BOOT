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
	{ 0x799f9f63, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xfb3e43f3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x48eb5134, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcae84b25, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x87d9f40f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xb4a05945, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7004326e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xa203e53a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x9a60f80e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xa216f3e1, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x4e5b07a5, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x6df310a7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x777790b5, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xff44a438, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x920c0215, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x45bb497a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd446305a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfd02e3d0, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc59902f6, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "513BFA538BC3A7F25A96AB9");
