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
	{ 0x5c5cd832, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x956a0959, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x402d7601, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xae20e8b8, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xc22e55ae, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x169d9329, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xbe8872bd, __VMLINUX_SYMBOL_STR(scsi_cmd_ioctl) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x8355eaa9, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xb2b924f1, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x81a05a85, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcc1847ff, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xf74ed26c, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xc4308bc8, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0x50ded839, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x7fcb5b75, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x815d20ae, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2b0ba2b0, __VMLINUX_SYMBOL_STR(scsi_sense_desc_find) },
	{ 0x3ac93118, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0x796fc5ce, __VMLINUX_SYMBOL_STR(scsi_get_sense_info_fld) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa15b902, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xb9f988df, __VMLINUX_SYMBOL_STR(get_user_pages_unlocked) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x1e220d66, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x332d11a1, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x3f3acc0, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xea4dac47, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x63124c65, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x4927ba4f, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x3d92dcc0, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x29d3d01a, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x40417b7e, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x6588ee01, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x5d5083ba, __VMLINUX_SYMBOL_STR(blk_put_queue) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xde99eb65, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xd9772906, __VMLINUX_SYMBOL_STR(blk_get_queue) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37d47758, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe3be277f, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2358f3ca, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x10263a72, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xca08db84, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x398594aa, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xfd294b84, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x4a19215c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xd7a0c473, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xfe22abf5, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x80c9c48a, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6CC6E5BED1BD93B6BB478C7");
