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
	{ 0x2bbbc88b, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xce87bdbe, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6f53f6a1, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xe2a34cb6, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0x7d82dfc, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x2de4cd6d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xbd5b9b04, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x2d2f3576, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x4c23be5b, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x4e7ddcf0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x8b513341, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x55ee84c5, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xb769346d, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xe5e47fd9, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x403c5e63, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xbb5a59d0, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x2f603042, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xbf443830, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbf803447, __VMLINUX_SYMBOL_STR(ip4_datagram_connect) },
	{ 0x7c54b045, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xc56e04d0, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0xcbdb07a4, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0xcb16ba14, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x6e7a5439, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0x540f47a9, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xbfe46639, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x34b6a497, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x257c4699, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xd87e2a8e, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xd010f124, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xcfd78a73, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0xd13f6b4e, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0x39127eb3, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x65d74c01, __VMLINUX_SYMBOL_STR(ip_cmsg_recv_offset) },
	{ 0xef4719d7, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xe8cae5c5, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x85ebe3ee, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xa502126c, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd32dde9a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3a4f78d5, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xea7adfd2, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xbdb9d8fc, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x9d03ac45, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x54c754e8, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x8d38284b, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xeb1c7873, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xaca95d93, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0xd7205956, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0xbe3ea4b5, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf4df5d00, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x14768e89, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x8ef59325, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0x46387c81, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "30B3DFD9B5EF2FBF78867CE");
