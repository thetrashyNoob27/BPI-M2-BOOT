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
	{ 0x560877c1, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x51b63778, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfd9025f0, __VMLINUX_SYMBOL_STR(kobject_get) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6b1b67d3, __VMLINUX_SYMBOL_STR(__bdevname) },
	{ 0x40417b7e, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x8f8e70d8, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x5d1b7c02, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x7410aba2, __VMLINUX_SYMBOL_STR(strreplace) },
	{ 0x73a4ada8, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x3fab3ca9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xccb157fa, __VMLINUX_SYMBOL_STR(bmap) },
	{ 0x3a9b6fb9, __VMLINUX_SYMBOL_STR(blk_unregister_region) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x3f3acc0, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x1c72bee1, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x1b442485, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x74b0a9a1, __VMLINUX_SYMBOL_STR(bd_link_disk_holder) },
	{ 0xc9b8ba69, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xeac12da1, __VMLINUX_SYMBOL_STR(blk_queue_split) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xb340aa3, __VMLINUX_SYMBOL_STR(kernfs_put) },
	{ 0xf72a3a3e, __VMLINUX_SYMBOL_STR(file_path) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8c45d7a2, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x4d751e00, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0xfd0adaf1, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8a2852ab, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x332d11a1, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x899c85fd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x50426df4, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x8e8cdce9, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc95ac421, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0xd4d7a32, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x3ada2992, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xb1db33fa, __VMLINUX_SYMBOL_STR(bd_unlink_disk_holder) },
	{ 0x865b0672, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x950e56ce, __VMLINUX_SYMBOL_STR(blk_set_stacking_limits) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x81a05a85, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x4ebd2109, __VMLINUX_SYMBOL_STR(check_disk_change) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x394c838b, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xbd2b914f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x25ce3a72, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xf8b6860e, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x2c1bcc4f, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x1f5fc91a, __VMLINUX_SYMBOL_STR(blk_register_region) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4ca75993, __VMLINUX_SYMBOL_STR(kernfs_find_and_get_ns) },
	{ 0xe7ed8bc0, __VMLINUX_SYMBOL_STR(seq_file_path) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3aaed94, __VMLINUX_SYMBOL_STR(blk_sync_queue) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xbf28b06, __VMLINUX_SYMBOL_STR(blk_integrity_compare) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x31329bb, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0xd7a0c473, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x1f59cbb8, __VMLINUX_SYMBOL_STR(kobject_add) },
	{ 0xb78063bf, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x1bd6527e, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x1e220d66, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x12b35ca8, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xad669f0e, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xfad8ea08, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x6588ee01, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xbf328c0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x36c2300e, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xbd0e6e82, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xda83f29e, __VMLINUX_SYMBOL_STR(free_buffer_head) },
	{ 0xe949b4a6, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x399a849f, __VMLINUX_SYMBOL_STR(sync_blockdev) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{  0xa9516, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0xe912da6b, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xfe22abf5, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x2ec7f6a2, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x8a262630, __VMLINUX_SYMBOL_STR(bioset_integrity_create) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xb0dceade, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0xee3f3382, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x351492f9, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0xbd04bd97, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5eb71aa, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x721b1851, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xc921ab0b, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x14eddb09, __VMLINUX_SYMBOL_STR(kobject_init) },
	{ 0x881e60d1, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0x5cb7dc1c, __VMLINUX_SYMBOL_STR(fget) },
	{ 0xea4dac47, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xea715ffc, __VMLINUX_SYMBOL_STR(dump_page) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf02afe74, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0xceaa0b42, __VMLINUX_SYMBOL_STR(alloc_page_buffers) },
	{ 0x1dd2d14, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x9249b4d, __VMLINUX_SYMBOL_STR(blk_integrity_register) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xdcad5081, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A3DFC3719A6448B34081166");