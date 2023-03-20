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
	{ 0x4880568e, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x42ee4782, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xf2c8332e, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x1bdab4b4, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x2358f3ca, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x58bb4334, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc969012a, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x598e4904, __VMLINUX_SYMBOL_STR(mod_timer_pending) },
	{ 0xdf93b9d8, __VMLINUX_SYMBOL_STR(timespec64_to_jiffies) },
	{ 0xb0dceade, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xf176e82, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x676aaed1, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x3c5e8104, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0x2ae2ea5c, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "914884F14028DB85F53DC5D");
