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
	{ 0x5c5cd832, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x4a958621, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0x301427cd, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x45bb497a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5ba938c, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xaf7f016e, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0x953df18d, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0xaa4003b4, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xbb72d4fe, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x28118cb6, __VMLINUX_SYMBOL_STR(__get_user_1) },
	{ 0x81a05a85, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xd8785235, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x417723d0, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x46c21426, __VMLINUX_SYMBOL_STR(serio_close) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x53ec4af5, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4a51f8cd, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");

MODULE_INFO(srcversion, "2539FBD7DC78116751482A3");
