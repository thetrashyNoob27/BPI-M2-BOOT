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
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x772fb250, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x20a3c5db, __VMLINUX_SYMBOL_STR(mutex_destroy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe58195ad, __VMLINUX_SYMBOL_STR(mfd_remove_devices) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa130fc75, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7f6c0eee, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x52b782a2, __VMLINUX_SYMBOL_STR(mfd_add_devices) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xff95cbca, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x1e19be02, __VMLINUX_SYMBOL_STR(hid_set_field) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x33a24427, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xee0bf410, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b*g0003v00008086p000009FA");
MODULE_ALIAS("hid:b*g0003v00008087p000009FA");
MODULE_ALIAS("hid:b*g0003v00008087p00000A04");
MODULE_ALIAS("hid:b*g0003v0000045Ep00000799");
MODULE_ALIAS("hid:b*g0003v0000045Ep000007A7");
MODULE_ALIAS("hid:b*g0003v0000045Ep000007A9");
MODULE_ALIAS("hid:b*g0003v00000483p000091D1");
MODULE_ALIAS("hid:b*g0003v00000483p00009100");
MODULE_ALIAS("hid:b*g0003v00002047p00000855");
MODULE_ALIAS("hid:b*g0003v0000048Dp00008386");
MODULE_ALIAS("hid:b*g0003v0000048Dp00008350");
MODULE_ALIAS("hid:b*g0003v*p*");

MODULE_INFO(srcversion, "F8FB4F070C708293CF4D884");
