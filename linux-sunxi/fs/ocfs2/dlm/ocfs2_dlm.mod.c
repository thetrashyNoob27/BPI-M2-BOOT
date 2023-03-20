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
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xad581cdb, __VMLINUX_SYMBOL_STR(o2nm_node_put) },
	{ 0x7158fafb, __VMLINUX_SYMBOL_STR(o2hb_unregister_callback) },
	{ 0xa7cab5e6, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5b054209, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xe60f3997, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xc3679d7b, __VMLINUX_SYMBOL_STR(o2hb_get_all_regions) },
	{ 0x2030a842, __VMLINUX_SYMBOL_STR(o2hb_register_callback) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x1b442485, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xae808bac, __VMLINUX_SYMBOL_STR(o2net_register_handler) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x36418553, __VMLINUX_SYMBOL_STR(o2net_send_message) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf1a5611d, __VMLINUX_SYMBOL_STR(o2net_unregister_handler_list) },
	{ 0x1b89c6ee, __VMLINUX_SYMBOL_STR(o2hb_fill_node_map) },
	{ 0xd1a5aaf8, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xa9f5379a, __VMLINUX_SYMBOL_STR(o2net_send_message_vec) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x50426df4, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfc205af9, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xd4d7a32, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x4a273b14, __VMLINUX_SYMBOL_STR(__seq_open_private) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x394c838b, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xbfd7d7a2, __VMLINUX_SYMBOL_STR(o2hb_global_heartbeat_active) },
	{ 0xa5c3e46d, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x140f0736, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x3ca81ceb, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xb1fbfbf1, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x658d7799, __VMLINUX_SYMBOL_STR(o2hb_setup_callback) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x617a218d, __VMLINUX_SYMBOL_STR(__cond_resched_lock) },
	{ 0x11736b03, __VMLINUX_SYMBOL_STR(__mlog_printk) },
	{ 0x3ce74a49, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xedc46c9f, __VMLINUX_SYMBOL_STR(o2nm_get_node_by_num) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xee3f3382, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xac7eadfa, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xa1ae48e1, __VMLINUX_SYMBOL_STR(o2hb_check_node_heartbeating_no_sem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa82a8645, __VMLINUX_SYMBOL_STR(o2nm_this_node) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ocfs2_nodemanager";


MODULE_INFO(srcversion, "DBDD8F182058AA59200298B");
