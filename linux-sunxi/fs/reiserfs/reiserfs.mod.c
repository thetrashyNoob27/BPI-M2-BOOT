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
	{ 0xe1844ed8, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0xed9b050f, __VMLINUX_SYMBOL_STR(page_zero_new_buffers) },
	{ 0x40d63779, __VMLINUX_SYMBOL_STR(dquot_alloc) },
	{ 0xc7ed7666, __VMLINUX_SYMBOL_STR(dquot_destroy) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x886daada, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x6b1b67d3, __VMLINUX_SYMBOL_STR(__bdevname) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x3979f8ba, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0xa7cab5e6, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xfd02eb7a, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0xe3eac0be, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5b054209, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x500ce27e, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x1afac0d2, __VMLINUX_SYMBOL_STR(dquot_writeback_dquots) },
	{ 0xf0a43575, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x20a3c5db, __VMLINUX_SYMBOL_STR(mutex_destroy) },
	{ 0xe8fea651, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x326be5bc, __VMLINUX_SYMBOL_STR(dquot_acquire) },
	{ 0xadf978a9, __VMLINUX_SYMBOL_STR(d_set_d_op) },
	{ 0x3f3acc0, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x6b7ff202, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x490b93a0, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x64999478, __VMLINUX_SYMBOL_STR(congestion_wait) },
	{ 0x93d3f05b, __VMLINUX_SYMBOL_STR(bdev_read_only) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x9c46dc99, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0x11a8560e, __VMLINUX_SYMBOL_STR(dquot_file_open) },
	{ 0xac84abc4, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x9026e883, __VMLINUX_SYMBOL_STR(dquot_mark_dquot_dirty) },
	{ 0xdb954a36, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x719162e0, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x86091bcb, __VMLINUX_SYMBOL_STR(blkdev_issue_flush) },
	{ 0xede8f6f1, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xa25f1774, __VMLINUX_SYMBOL_STR(dquot_quota_on_mount) },
	{ 0x440aff16, __VMLINUX_SYMBOL_STR(posix_acl_access_xattr_handler) },
	{ 0x8f4bdfea, __VMLINUX_SYMBOL_STR(posix_acl_update_mode) },
	{ 0x3bc10d21, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xa4260827, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0x4dcee2a1, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xc12cd003, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x9f000c0e, __VMLINUX_SYMBOL_STR(dquot_quota_off) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xed5d7594, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x98580bb8, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd84c1d89, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x95e10fd4, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xa56ecdc9, __VMLINUX_SYMBOL_STR(__dquot_free_space) },
	{ 0x63e3d2fc, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x93048911, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x5b42ddd5, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x10ab0213, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0x1c4d31a9, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0x149b0539, __VMLINUX_SYMBOL_STR(__dquot_alloc_space) },
	{ 0x22c4c973, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x277d6860, __VMLINUX_SYMBOL_STR(dquot_get_dqblk) },
	{ 0x86a87198, __VMLINUX_SYMBOL_STR(insert_inode_locked4) },
	{ 0x78c1b146, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xe0239e59, __VMLINUX_SYMBOL_STR(try_to_release_page) },
	{ 0x8e8cdce9, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfc205af9, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0x65a0bcfc, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0x2f343336, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xfab98849, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x9597bf5b, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x7a2add7d, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0x14109f4a, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0x3ada2992, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x8b7c6b5c, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc8e2ac01, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x91929fbb, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x1b511218, __VMLINUX_SYMBOL_STR(dquot_alloc_inode) },
	{ 0x2d59675e, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0xafa4e372, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe131b2ac, __VMLINUX_SYMBOL_STR(posix_acl_chmod) },
	{ 0x518a60d9, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x8cd9ba54, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xe3dddca3, __VMLINUX_SYMBOL_STR(__sync_dirty_buffer) },
	{ 0x97c35b93, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x4593e3e5, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x2797ff41, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x68b83ac6, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x140f0736, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xab5cc30e, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1e02b155, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x5eaa1ce9, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x344c0d43, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x976debfa, __VMLINUX_SYMBOL_STR(dquot_resume) },
	{ 0xa681fe88, __VMLINUX_SYMBOL_STR(generate_random_uuid) },
	{ 0xd112dbd1, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x31329bb, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0x43cdcc24, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x18b38ce6, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x702bef2e, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x3ca81ceb, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x13633f08, __VMLINUX_SYMBOL_STR(shrink_dcache_sb) },
	{ 0xb1fbfbf1, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x1bd6527e, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x15a34c23, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0xb52e31d6, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x622cc2bc, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0xe8734eaf, __VMLINUX_SYMBOL_STR(dquot_set_dqblk) },
	{ 0x6f44c76d, __VMLINUX_SYMBOL_STR(mark_buffer_async_write) },
	{ 0x677dcf86, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x5d2a21b9, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0xf1256d08, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x617a218d, __VMLINUX_SYMBOL_STR(__cond_resched_lock) },
	{ 0xab76a83a, __VMLINUX_SYMBOL_STR(xattr_full_name) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x3ce74a49, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbd0e6e82, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x30762815, __VMLINUX_SYMBOL_STR(dquot_quota_on) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x234203ed, __VMLINUX_SYMBOL_STR(dquot_initialize) },
	{ 0x5f86ff3e, __VMLINUX_SYMBOL_STR(sync_mapping_buffers) },
	{ 0x7b9572d3, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x23b1de6d, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xe949b4a6, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x69781bc1, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x58732f05, __VMLINUX_SYMBOL_STR(create_empty_buffers) },
	{ 0x8b2edfc2, __VMLINUX_SYMBOL_STR(try_to_free_buffers) },
	{ 0xa502126c, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x65775cd2, __VMLINUX_SYMBOL_STR(generic_cont_expand_simple) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc3e368fe, __VMLINUX_SYMBOL_STR(dquot_quota_sync) },
	{ 0x31698c10, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x568e1cd2, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x4dbb6591, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xbc44153c, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0xe1ed45c4, __VMLINUX_SYMBOL_STR(inode_set_bytes) },
	{ 0xcf051bfa, __VMLINUX_SYMBOL_STR(inode_get_bytes) },
	{ 0xfb7e93bb, __VMLINUX_SYMBOL_STR(proc_get_parent_data) },
	{ 0x14dd78e5, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x351492f9, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7b0494d1, __VMLINUX_SYMBOL_STR(dquot_drop) },
	{ 0x41814cb8, __VMLINUX_SYMBOL_STR(dirty_writeback_interval) },
	{ 0xac7eadfa, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xe47398ed, __VMLINUX_SYMBOL_STR(dquot_transfer) },
	{ 0x6126e1eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x2431827e, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x31954d1, __VMLINUX_SYMBOL_STR(remove_proc_subtree) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x495f6a17, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xa0fe4389, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x78dccbe3, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xf83dcb05, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2b59a464, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0x27cd1bba, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0xaac8a8b0, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1a8b93d4, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xe658a02f, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xa4075bb, __VMLINUX_SYMBOL_STR(write_dirty_buffer) },
	{ 0xfa172e6e, __VMLINUX_SYMBOL_STR(__set_page_dirty_buffers) },
	{ 0x183120ef, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xe4bfac86, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xea4dac47, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x44fed730, __VMLINUX_SYMBOL_STR(__bforget) },
	{ 0x364dc4f1, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x7b0cd47f, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8f97b701, __VMLINUX_SYMBOL_STR(__block_write_begin) },
	{ 0xa59d28fc, __VMLINUX_SYMBOL_STR(__find_get_block) },
	{ 0xeafd768, __VMLINUX_SYMBOL_STR(posix_acl_default_xattr_handler) },
	{ 0x27e31820, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0xb03f2648, __VMLINUX_SYMBOL_STR(replace_mount_options) },
	{ 0x9f406301, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x1c3f54ca, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x74ad9221, __VMLINUX_SYMBOL_STR(dquot_get_state) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xea715ffc, __VMLINUX_SYMBOL_STR(dump_page) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9ca5fd7b, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xff03879a, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x354d599c, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0x18962c0c, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0xcb8872a9, __VMLINUX_SYMBOL_STR(dquot_free_inode) },
	{ 0xebaea473, __VMLINUX_SYMBOL_STR(security_old_inode_init_security) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x613aa0ee, __VMLINUX_SYMBOL_STR(dquot_release) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x56f4448a, __VMLINUX_SYMBOL_STR(dquot_disable) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x13eda51e, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0xfd39e614, __VMLINUX_SYMBOL_STR(dquot_commit_info) },
	{ 0x9d1d2a82, __VMLINUX_SYMBOL_STR(dquot_set_dqinfo) },
	{ 0x2482e688, __VMLINUX_SYMBOL_STR(vsprintf) },
	{ 0xa283c003, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x91cb59b9, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0x43ac33a6, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xdf3cff00, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xa15b902, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xf441a005, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0xf73e8ba3, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xdbfc4916, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x14ef9796, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
	{ 0xa09a4e81, __VMLINUX_SYMBOL_STR(dquot_commit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FDECC0F8545DFB520CCBAFA");