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
	{ 0xbe077fb5, __VMLINUX_SYMBOL_STR(usb_serial_generic_tiocmiwait) },
	{ 0x9e948a, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x66dbd5a0, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x2b5dd75e, __VMLINUX_SYMBOL_STR(usb_serial_generic_open) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xfec47e76, __VMLINUX_SYMBOL_STR(usb_serial_generic_close) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf2997713, __VMLINUX_SYMBOL_STR(tty_termios_hw_change) },
	{ 0xf5b03c61, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe98cd57b, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x6ee9f86c, __VMLINUX_SYMBOL_STR(usb_serial_handle_dcd_change) },
	{ 0x25abf118, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x81ba0e64, __VMLINUX_SYMBOL_STR(usb_serial_handle_sysrq_char) },
	{ 0x4058122d, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x5267d84f, __VMLINUX_SYMBOL_STR(usb_serial_handle_break) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x12bb2597, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1934p0706d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "42B2FD15BB0B041DFDC45EA");
