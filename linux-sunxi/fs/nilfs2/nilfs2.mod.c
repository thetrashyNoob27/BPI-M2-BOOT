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
	{ 0x61b7b126, __VMLINUX_SYMBOL_STR(simple_strtoull) },
	{ 0xfa14919c, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x56dbd6e6, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe1844ed8, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x93c1735a, __VMLINUX_SYMBOL_STR(address_space_init_once) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x51b63778, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xbde203b1, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1d9f4ace, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x886daada, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x6b2d7e89, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0xa7cab5e6, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x73a4ada8, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xe3eac0be, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5b054209, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x500ce27e, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0xf0a43575, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x691b33e5, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x3f3acc0, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x490b93a0, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x46b8b084, __VMLINUX_SYMBOL_STR(find_get_pages_contig) },
	{ 0x93d3f05b, __VMLINUX_SYMBOL_STR(bdev_read_only) },
	{ 0x92a9c60c, __VMLINUX_SYMBOL_STR(time_to_tm) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xb85597e9, __VMLINUX_SYMBOL_STR(block_invalidatepage) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xa1c15620, __VMLINUX_SYMBOL_STR(block_is_partially_uptodate) },
	{ 0xd307e3db, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0xdb954a36, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x719162e0, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x86091bcb, __VMLINUX_SYMBOL_STR(blkdev_issue_flush) },
	{ 0xede8f6f1, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x83bae7cd, __VMLINUX_SYMBOL_STR(touch_buffer) },
	{ 0x879bbcd5, __VMLINUX_SYMBOL_STR(downgrade_write) },
	{ 0xfc477719, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x3bc10d21, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x4dcee2a1, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x8c7e2b72, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x58f7069a, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xc12cd003, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xed5d7594, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xbd3cc55, __VMLINUX_SYMBOL_STR(d_find_alias) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd84c1d89, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xacf6bce6, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x4d751e00, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0x63e3d2fc, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x93048911, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x5b42ddd5, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x10ab0213, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0x22c4c973, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x899c85fd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x50426df4, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x86a87198, __VMLINUX_SYMBOL_STR(insert_inode_locked4) },
	{ 0x78c1b146, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfc205af9, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x65a0bcfc, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xfab98849, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7a2add7d, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0x14109f4a, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0x3ada2992, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x8b7c6b5c, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x94bd962, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc8e2ac01, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf9a88d97, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x8495c3ba, __VMLINUX_SYMBOL_STR(d_obtain_root) },
	{ 0xb1fc4673, __VMLINUX_SYMBOL_STR(inode_add_bytes) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x447fa5a7, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x2d59675e, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbd2b914f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x518a60d9, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xf8b6860e, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x647b1b71, __VMLINUX_SYMBOL_STR(sget) },
	{ 0x2c1bcc4f, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x8cd9ba54, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x1d924dd3, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xe3dddca3, __VMLINUX_SYMBOL_STR(__sync_dirty_buffer) },
	{ 0x97c35b93, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x4593e3e5, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x140f0736, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xab5cc30e, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1e02b155, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x976728c8, __VMLINUX_SYMBOL_STR(file_update_time) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x344c0d43, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x7deb1a36, __VMLINUX_SYMBOL_STR(page_symlink) },
	{ 0xd112dbd1, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x13633e40, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x2ae5af7c, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x18b38ce6, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xf70e4a4d, __VMLINUX_SYMBOL_STR(preempt_schedule_notrace) },
	{ 0x702bef2e, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x3ca81ceb, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xb1fbfbf1, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x1bd6527e, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xb52e31d6, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x1683a50b, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0xad669f0e, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xfcaa1771, __VMLINUX_SYMBOL_STR(ilookup5) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x677dcf86, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x5d2a21b9, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0xf1256d08, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x36c2300e, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x3ce74a49, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbd0e6e82, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x4d0d163d, __VMLINUX_SYMBOL_STR(copy_page) },
	{ 0x22dfdd06, __VMLINUX_SYMBOL_STR(radix_tree_tag_set) },
	{ 0xc5492e2e, __VMLINUX_SYMBOL_STR(wait_for_stable_page) },
	{ 0x23b1de6d, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x534af277, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0xe949b4a6, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xbd7f9ddc, __VMLINUX_SYMBOL_STR(inode_sub_bytes) },
	{ 0xfe1221df, __VMLINUX_SYMBOL_STR(block_write_end) },
	{ 0x69781bc1, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x58732f05, __VMLINUX_SYMBOL_STR(create_empty_buffers) },
	{ 0xa502126c, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xeca22b63, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xb5ab1db0, __VMLINUX_SYMBOL_STR(pagevec_lookup_tag) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xd49756dc, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0xcdc5a7d8, __VMLINUX_SYMBOL_STR(__breadahead) },
	{ 0xfdfc0b3b, __VMLINUX_SYMBOL_STR(fiemap_fill_next_extent) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x31698c10, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x568e1cd2, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x4dbb6591, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x2e68b56a, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0xee3f3382, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xee84e170, __VMLINUX_SYMBOL_STR(shrink_dcache_parent) },
	{ 0x3f2cb81b, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0x14dd78e5, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x351492f9, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4bcf03a4, __VMLINUX_SYMBOL_STR(radix_tree_tag_clear) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xac7eadfa, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x6126e1eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x2431827e, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xa57673d0, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3b5cd737, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x495f6a17, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xb62f5683, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0x78dccbe3, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xf83dcb05, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x42b6878, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2_range) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x2b59a464, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0x27cd1bba, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0xf4dd916c, __VMLINUX_SYMBOL_STR(pagevec_lookup) },
	{ 0xaac8a8b0, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7e27e6aa, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0xe93f6042, __VMLINUX_SYMBOL_STR(trace_print_symbols_seq) },
	{ 0xca4218db, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1a8b93d4, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x721b1851, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xb473a336, __VMLINUX_SYMBOL_STR(block_page_mkwrite) },
	{ 0x5a489bf3, __VMLINUX_SYMBOL_STR(end_buffer_read_sync) },
	{ 0x1ff6c8b8, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x9754ec10, __VMLINUX_SYMBOL_STR(radix_tree_preload) },
	{ 0xe658a02f, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x881e60d1, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0xafe9149a, __VMLINUX_SYMBOL_STR(block_truncate_page) },
	{ 0x183120ef, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xe551be90, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0xe4bfac86, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xea4dac47, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x364dc4f1, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x7b0cd47f, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x99e0858a, __VMLINUX_SYMBOL_STR(inode_set_flags) },
	{ 0x8f97b701, __VMLINUX_SYMBOL_STR(__block_write_begin) },
	{ 0x27e31820, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x9f406301, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x1c3f54ca, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x629aea35, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xea715ffc, __VMLINUX_SYMBOL_STR(dump_page) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa3d9c348, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x871c0a7e, __VMLINUX_SYMBOL_STR(fiemap_check_flags) },
	{ 0x9ca5fd7b, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xff03879a, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x9e685d65, __VMLINUX_SYMBOL_STR(empty_aops) },
	{ 0x6e6514ed, __VMLINUX_SYMBOL_STR(radix_tree_insert) },
	{ 0xa283c003, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x91cb59b9, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0x43ac33a6, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xdf3cff00, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xa15b902, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xf73e8ba3, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xdbfc4916, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x14ef9796, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E5A476F85FDE9D7D91AF76A");