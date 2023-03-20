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
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xabbc8ed3, __VMLINUX_SYMBOL_STR(usb_serial_generic_get_icount) },
	{ 0xbe077fb5, __VMLINUX_SYMBOL_STR(usb_serial_generic_tiocmiwait) },
	{ 0x9e948a, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x66dbd5a0, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x963bcc3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf253f25f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xecbc4012, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd243572a, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x81a05a85, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf5b03c61, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x89d9e693, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x657610b1, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x12bb2597, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xdccdab7, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xe98cd57b, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x25abf118, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0xf4d6133b, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1608p0215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p020Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p020Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0244d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0247d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5E147C1A360A72E970FFC9A");
