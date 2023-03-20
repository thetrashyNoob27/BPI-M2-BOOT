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
	{ 0x7b585189, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x956a0959, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xa92df270, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0x402d7601, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x42ee4782, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xcf7eee25, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x58bb4334, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x169d9329, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x8355eaa9, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1e220d66, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x332d11a1, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xb2b924f1, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcc1847ff, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x81a05a85, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x815d20ae, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x2206b9c3, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0xf74ed26c, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xc4308bc8, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x50ded839, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x7fcb5b75, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x40417b7e, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xe3be277f, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x63124c65, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x4927ba4f, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3f3acc0, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x2b0ba2b0, __VMLINUX_SYMBOL_STR(scsi_sense_desc_find) },
	{ 0x3ac93118, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0x796fc5ce, __VMLINUX_SYMBOL_STR(scsi_get_sense_info_fld) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x3d92dcc0, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x29d3d01a, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x89d9e693, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x2358f3ca, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xfe22abf5, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xdfd61436, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x80c9c48a, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xf2c8332e, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4B25A35D7C1EBDAE63910CF");
