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
	{ 0xac84abc4, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x25ce3a72, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5d1b7c02, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xc921ab0b, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x66fd8e75, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x59e0e58b, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xfe22abf5, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xeafc06b4, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x40417b7e, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x9d9f26be, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xbe361cef, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0xd1a5aaf8, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x59ba7024, __VMLINUX_SYMBOL_STR(blkdev_reread_part) },
	{ 0x394c838b, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xa621a504, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xe60f3997, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xee3f3382, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x50426df4, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xfd0adaf1, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x16592f8e, __VMLINUX_SYMBOL_STR(set_device_ro) },
	{ 0x18962c0c, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0xc3d6e275, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xb78063bf, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x203cae1c, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0x89f542dd, __VMLINUX_SYMBOL_STR(blk_rq_init) },
	{ 0x839239c9, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0x45bb497a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xa0db661b, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6c30f1f, __VMLINUX_SYMBOL_STR(dequeue_signal) },
	{ 0x657610b1, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x89d9e693, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x1011042a, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x64d52568, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x15200633, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x4b7389cf, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe64e000c, __VMLINUX_SYMBOL_STR(force_sig) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xdb954a36, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe8fea651, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x8cd9ba54, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x23b1de6d, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x879e81df, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x6b113833, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x4d3c153f, __VMLINUX_SYMBOL_STR(sigprocmask) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DD8C5FF6C2BE9A22548F48D");
