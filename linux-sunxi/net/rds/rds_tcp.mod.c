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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x758153f8, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xe1844ed8, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x411a871e, __VMLINUX_SYMBOL_STR(rds_trans_register) },
	{ 0x6b113833, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x366ca81c, __VMLINUX_SYMBOL_STR(rds_connect_complete) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xbe2be23, __VMLINUX_SYMBOL_STR(tcp_done) },
	{ 0xb4daa310, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xf67111eb, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x50cbe7b3, __VMLINUX_SYMBOL_STR(rds_stats) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x6b0e1994, __VMLINUX_SYMBOL_STR(rds_conn_create) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xfe9ab4dd, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x47289d8a, __VMLINUX_SYMBOL_STR(rds_recv_incoming) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xee196986, __VMLINUX_SYMBOL_STR(rds_inc_init) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xa230c734, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0x778c458, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xef583432, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xcbdb07a4, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6e7a5439, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0x540f47a9, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x4bc9fa80, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0xd336dbe7, __VMLINUX_SYMBOL_STR(rds_info_register_func) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x140f0736, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x4053738b, __VMLINUX_SYMBOL_STR(rds_inc_put) },
	{ 0x96fafe85, __VMLINUX_SYMBOL_STR(rds_stats_info_copy) },
	{ 0xc2dab779, __VMLINUX_SYMBOL_STR(rds_info_copy) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xd06bf936, __VMLINUX_SYMBOL_STR(rds_send_drop_acked) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xec203ee8, __VMLINUX_SYMBOL_STR(rds_conn_destroy) },
	{ 0xe5859848, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x3ce74a49, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa467af, __VMLINUX_SYMBOL_STR(rds_wq) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xf315fec1, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xac7eadfa, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x8313be0c, __VMLINUX_SYMBOL_STR(rds_info_deregister_func) },
	{ 0xcd4b4144, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xfb116777, __VMLINUX_SYMBOL_STR(rds_trans_unregister) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x391256e9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x2b310ebe, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0xb48ecf17, __VMLINUX_SYMBOL_STR(rds_conn_drop) },
	{ 0xc642cc2c, __VMLINUX_SYMBOL_STR(rds_cong_map_updated) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rds";


MODULE_INFO(srcversion, "311445171A639D76FE6C7F1");
