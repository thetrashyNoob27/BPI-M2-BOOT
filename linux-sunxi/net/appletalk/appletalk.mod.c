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
	{ 0x758153f8, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x24a5f0d3, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x178e8964, __VMLINUX_SYMBOL_STR(seq_open_private) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x676aaed1, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x1c72bee1, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x1b442485, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0x609de6ec, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xf7e32a9d, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x3c44f3c1, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xdb954a36, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xf67111eb, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xcc1a4117, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x4c23be5b, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x4e7ddcf0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x8b513341, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x75bda77a, __VMLINUX_SYMBOL_STR(seq_hlist_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1bb996e, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xb216844a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd446305a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x2f603042, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xc006717b, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0xbf443830, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x3ada2992, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x778c458, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x7c54b045, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x91929fbb, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x17b37f2d, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xcbdb07a4, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x540f47a9, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x3dfc897c, __VMLINUX_SYMBOL_STR(seq_hlist_start_head) },
	{ 0xbfe46639, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x34b6a497, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x257c4699, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8c59dab7, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x5fb3a535, __VMLINUX_SYMBOL_STR(register_snap_client) },
	{ 0x96ca7377, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xe5859848, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xef4719d7, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xffb97a8f, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd32dde9a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xfb644a26, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3a4f78d5, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x3500abf3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x4d152c28, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xbcc97d6d, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x2b63269b, __VMLINUX_SYMBOL_STR(unregister_snap_client) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x777c3f7a, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xbd1ea2d5, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xd9f5be5, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xe13e9a1d, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xb3348446, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x3c5e8104, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x8e7708db, __VMLINUX_SYMBOL_STR(dev_mc_add_global) },
	{ 0x46387c81, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=psnap";


MODULE_INFO(srcversion, "A4A5D0011310E8E3819309C");
