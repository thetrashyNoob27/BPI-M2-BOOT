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
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x86809408, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x4e1ce272, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2a1161fb, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x33d0ad59, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xb0fede3f, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x5641485b, __VMLINUX_SYMBOL_STR(tty_termios_encode_baud_rate) },
	{ 0xb465ebd7, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x12bb2597, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xdccdab7, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xa72ca48d, __VMLINUX_SYMBOL_STR(tty_buffer_request_room) },
	{ 0xe98cd57b, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x25abf118, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xcae1d21d, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x90ffac48, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf5b03c61, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x4e5b07a5, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x4cabed9, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0xe85e0606, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xcae84b25, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x3500abf3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x73754cd, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0x9a60f80e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x327506ed, __VMLINUX_SYMBOL_STR(tty_port_tty_set) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x87d9f40f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd6044b87, __VMLINUX_SYMBOL_STR(tty_port_register_device_attr) },
	{ 0xbce79e4a, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x5200f351, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xad2a53fb, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb4a05945, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x48eb5134, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x6de55337, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x991c5e6c, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6df310a7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xd446305a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa203e53a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x336b0096, __VMLINUX_SYMBOL_STR(usb_queue_reset_device) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0AF0p6711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6731d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6751d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6771d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6791d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6911d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6971d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pC031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7361d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7381d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7A05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p9200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD155d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD157d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pC100d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AE0E4BD0F4FD3BF13FD0091");
