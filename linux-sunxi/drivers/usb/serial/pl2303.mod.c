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
	{ 0xd243572a, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xfec47e76, __VMLINUX_SYMBOL_STR(usb_serial_generic_close) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf5b03c61, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xf2997713, __VMLINUX_SYMBOL_STR(tty_termios_hw_change) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe98cd57b, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x6ee9f86c, __VMLINUX_SYMBOL_STR(usb_serial_handle_dcd_change) },
	{ 0x25abf118, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x5267d84f, __VMLINUX_SYMBOL_STR(usb_serial_handle_break) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x12bb2597, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x81ba0e64, __VMLINUX_SYMBOL_STR(usb_serial_handle_sysrq_char) },
	{ 0x4058122d, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0xdccdab7, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v067Bp2303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp04BBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp1234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067BpAAA2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067BpAAA0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0609d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067BpE1F1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0A0Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2118d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep5003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep5004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EBAp1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EBAp2080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF7p0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0584pB000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2478p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1453p4026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0731p0528d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p2068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F7p02DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F5p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F5p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F5p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F5p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p4027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0745p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v078Bp1234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B5pAC70d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E55p110Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0731p2003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v058Fp9720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F6p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp002Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ADp0FBAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5372p2303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p3524d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0B39d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p3139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p3239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0521d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0437d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11ADp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B63p6530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B8Cp2303d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FE905AACAE004CC4AEF915C");