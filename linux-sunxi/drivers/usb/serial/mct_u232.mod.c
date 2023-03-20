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
	{ 0xabbc8ed3, __VMLINUX_SYMBOL_STR(usb_serial_generic_get_icount) },
	{ 0xbe077fb5, __VMLINUX_SYMBOL_STR(usb_serial_generic_tiocmiwait) },
	{ 0x9e948a, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x66dbd5a0, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x12bb2597, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xdccdab7, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfec47e76, __VMLINUX_SYMBOL_STR(usb_serial_generic_close) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xf5b03c61, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0711p0210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0230d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0109d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A0CB513F9AD3C1928D74826");
