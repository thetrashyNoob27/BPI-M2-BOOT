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
	{ 0xd19d1a53, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xd328712, __VMLINUX_SYMBOL_STR(neigh_seq_next) },
	{ 0xd017e71e, __VMLINUX_SYMBOL_STR(neigh_seq_stop) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x4443d399, __VMLINUX_SYMBOL_STR(atm_proc_root) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x49bddb1, __VMLINUX_SYMBOL_STR(register_atm_ioctl) },
	{ 0x777c3f7a, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xd552c047, __VMLINUX_SYMBOL_STR(vcc_release_async) },
	{ 0x48eb5134, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x6da58885, __VMLINUX_SYMBOL_STR(deregister_atm_ioctl) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2de4cd6d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xc87093eb, __VMLINUX_SYMBOL_STR(__neigh_create) },
	{ 0xf3ada690, __VMLINUX_SYMBOL_STR(neigh_lookup) },
	{ 0xbdb9d8fc, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe28f0cbf, __VMLINUX_SYMBOL_STR(vcc_process_recv_queue) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x90a8670b, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x3dd61e76, __VMLINUX_SYMBOL_STR(vcc_insert_socket) },
	{ 0xb4a05945, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xcae84b25, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3500abf3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbc14bdc4, __VMLINUX_SYMBOL_STR(atm_charge) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xd446305a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x14475699, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd599071d, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x73fdde8a, __VMLINUX_SYMBOL_STR(neigh_update) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x9a60f80e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xbf328c0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x778c458, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x12d86307, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xe5859848, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xdfd61436, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x75f85a60, __VMLINUX_SYMBOL_STR(__neigh_for_each_release) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xc9e50ebd, __VMLINUX_SYMBOL_STR(arp_tbl) },
	{ 0x86318568, __VMLINUX_SYMBOL_STR(neigh_seq_start) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2797ff41, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdb954a36, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x1e9e8c8b, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x57f9c824, __VMLINUX_SYMBOL_STR(neigh_direct_output) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "E95D6535EB11CA57D908446");
