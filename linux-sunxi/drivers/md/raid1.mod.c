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
	{ 0x8eccb067, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x8e30e332, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xd57f16de, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xbd04bd97, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x8f8e70d8, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xbf0d573f, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0x9c2eb93d, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x5a21a873, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x780bb80f, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3f3acc0, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x20849343, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x41de62df, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x8cd9ba54, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x23b1de6d, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0xbe0db647, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x94351929, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x25e9776e, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0xee88d0, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xfad8ea08, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x53a659b8, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0x2d171cea, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x8aa66784, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xec488c25, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x1441e44b, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x95450933, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x80c9c48a, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xad0fad11, __VMLINUX_SYMBOL_STR(bio_alloc_pages) },
	{ 0x73a4ada8, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xf8b6860e, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xc6b65710, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0xf8c64120, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x2fecf72b, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x2b0a9201, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0x7cf34a41, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0x87db8049, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0x8c5d27e2, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x8a2852ab, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x4d831d57, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x6588ee01, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xd7a0c473, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xcef5b97e, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0xba10341f, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0xdb2d74fb, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x1e220d66, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xea4dac47, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x137cc518, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x332d11a1, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe949b4a6, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xb9eb63c3, __VMLINUX_SYMBOL_STR(md_cluster_ops) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd2260e3, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0xa68dbb6f, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x806fcef2, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x122aa500, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xad669f0e, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x12b35ca8, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "32FAE561947B19C6E72E701");
