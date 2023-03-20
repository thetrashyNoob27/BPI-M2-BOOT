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
	{ 0x16179ea4, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5c5cd832, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x956a0959, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x402d7601, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x42ee4782, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xcf7eee25, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x58bb4334, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbb72d4fe, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x169d9329, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x8355eaa9, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9a9b07c, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2358f3ca, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe3be277f, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x32e4f82e, __VMLINUX_SYMBOL_STR(scsi_print_sense_hdr) },
	{ 0xb736abd0, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0xb2b924f1, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3d92dcc0, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf2c8332e, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "86DD4393BC590E7FF649DE9");
