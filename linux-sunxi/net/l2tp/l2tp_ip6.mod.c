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
	{ 0x6f53f6a1, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x39127eb3, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0xebabde6, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0xbe97856b, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0x70639972, __VMLINUX_SYMBOL_STR(l2tp_ioctl) },
	{ 0x2f603042, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xbf443830, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xbb5a59d0, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x55ee84c5, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xbe3ea4b5, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x9d03ac45, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xd87e2a8e, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xbfe46639, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x2052cdd6, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0xd32dde9a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x34b6a497, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x7c54b045, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x403c5e63, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xaeffd9b9, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0x157e8401, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0x5c6d96c5, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0xb3fab74, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0x3a4f78d5, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x9c093fd0, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0xfb724fc, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xef4719d7, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xea7adfd2, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x54c754e8, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x2bbbc88b, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x2d2f3576, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0xbd5b9b04, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x5ddedcf4, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0xa3075ef6, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x4e7ddcf0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xe5e47fd9, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdf49bf19, __VMLINUX_SYMBOL_STR(ip6_datagram_connect) },
	{ 0x8d38284b, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0x3aba02c, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0xaca95d93, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x257c4699, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xd9fd954, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0xc9daefc7, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x2de4cd6d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x758153f8, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x3df27149, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0x5487496, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0x540f47a9, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xf51e98e8, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x2b900fd4, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xcb16ba14, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x5a13610f, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x463d24ea, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0x58c7778a, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x5a456888, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0xcd2635ec, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x46387c81, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x19201932, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0xc56e04d0, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0xcfd78a73, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0xcbdb07a4, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x8b513341, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa646eea1, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "C4A64E69F381CBB20593E13");
