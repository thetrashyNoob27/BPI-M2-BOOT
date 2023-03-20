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
	{ 0x68c5cbca, __VMLINUX_SYMBOL_STR(dev_load) },
	{ 0x24a5f0d3, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x98f692c5, __VMLINUX_SYMBOL_STR(dev_getbyhwaddr_rcu) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x2de4cd6d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf67111eb, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x90c3e7f0, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x4c23be5b, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xdf05e4d7, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x4e7ddcf0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x8b513341, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe5e47fd9, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xbb5a59d0, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x2f603042, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xc006717b, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0xbf443830, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x2cf8608c, __VMLINUX_SYMBOL_STR(ieee802154_hdr_pull) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7c54b045, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x17b37f2d, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xcbdb07a4, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xda8e2cc6, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x540f47a9, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x4bc9fa80, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0xc17ea3cf, __VMLINUX_SYMBOL_STR(sock_prot_inuse_add) },
	{ 0xbfe46639, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x34b6a497, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xecab22aa, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x8c59dab7, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x96ca7377, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x48c47019, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xef4719d7, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xffb97a8f, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd32dde9a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xfb644a26, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xd894cbb2, __VMLINUX_SYMBOL_STR(dev_getfirstbyhwtype) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3a4f78d5, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x4d152c28, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9d03ac45, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0xbe3ea4b5, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xbd1ea2d5, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xe13e9a1d, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x46387c81, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ieee802154";


MODULE_INFO(srcversion, "3902668E61C4C29C6EE4D17");
