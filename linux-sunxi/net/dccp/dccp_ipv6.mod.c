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
	{ 0x59814a84, __VMLINUX_SYMBOL_STR(dccp_statistics) },
	{ 0x8ef6ecbf, __VMLINUX_SYMBOL_STR(dccp_init_sock) },
	{ 0x591e4deb, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0xca4dec34, __VMLINUX_SYMBOL_STR(dccp_v4_do_rcv) },
	{ 0x99a7938d, __VMLINUX_SYMBOL_STR(inet6_csk_update_pmtu) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x72fdc791, __VMLINUX_SYMBOL_STR(dccp_set_state) },
	{ 0xed760115, __VMLINUX_SYMBOL_STR(inet6_csk_bind_conflict) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xebabde6, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x6f53f6a1, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xa9d618fd, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0xb0596156, __VMLINUX_SYMBOL_STR(dccp_hashinfo) },
	{ 0xfb724fc, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xa10ebfcd, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0x18a81be7, __VMLINUX_SYMBOL_STR(dccp_sendmsg) },
	{ 0x76833707, __VMLINUX_SYMBOL_STR(ipv6_opt_accepted) },
	{ 0x7d82dfc, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0xbc1e059a, __VMLINUX_SYMBOL_STR(dccp_ctl_make_reset) },
	{ 0x9e1c0d0a, __VMLINUX_SYMBOL_STR(dccp_destroy_sock) },
	{ 0x7874831f, __VMLINUX_SYMBOL_STR(dccp_make_response) },
	{ 0xb4daa310, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x2de4cd6d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf67111eb, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xa88649da, __VMLINUX_SYMBOL_STR(dccp_rcv_established) },
	{ 0xb0b71fa7, __VMLINUX_SYMBOL_STR(dccp_req_err) },
	{ 0x19bc0b7a, __VMLINUX_SYMBOL_STR(dccp_v4_conn_request) },
	{ 0xf5c3f5ef, __VMLINUX_SYMBOL_STR(inet_csk_prepare_forced_close) },
	{ 0xe5e4f13a, __VMLINUX_SYMBOL_STR(dccp_create_openreq_child) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3684b017, __VMLINUX_SYMBOL_STR(ipv6_dup_options) },
	{ 0xf91411d9, __VMLINUX_SYMBOL_STR(dccp_check_req) },
	{ 0x55ee84c5, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x157e8401, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0xb0d888b, __VMLINUX_SYMBOL_STR(icmpv6_err_convert) },
	{ 0x9c093fd0, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0x84ba6ce4, __VMLINUX_SYMBOL_STR(dccp_recvmsg) },
	{ 0x356e42a1, __VMLINUX_SYMBOL_STR(ip6_xmit) },
	{ 0xd7503f62, __VMLINUX_SYMBOL_STR(inet_sk_rebuild_header) },
	{ 0xc38259af, __VMLINUX_SYMBOL_STR(__this_cpu_preempt_check) },
	{ 0x4e0b66ac, __VMLINUX_SYMBOL_STR(inet6_getname) },
	{ 0x7785104, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0x8330eebc, __VMLINUX_SYMBOL_STR(inet6_csk_xmit) },
	{ 0x66910c85, __VMLINUX_SYMBOL_STR(dccp_ioctl) },
	{ 0x784f2290, __VMLINUX_SYMBOL_STR(dccp_setsockopt) },
	{ 0xbb5a59d0, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x2f603042, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xfb074180, __VMLINUX_SYMBOL_STR(dccp_child_process) },
	{ 0xbf443830, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7c54b045, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xbb4d4ed5, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x2b900fd4, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xef583432, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x71e006e9, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0x1e86c7a4, __VMLINUX_SYMBOL_STR(dccp_v4_request_recv_sock) },
	{ 0x80c879d3, __VMLINUX_SYMBOL_STR(dccp_parse_options) },
	{ 0x84fa8761, __VMLINUX_SYMBOL_STR(dccp_getsockopt) },
	{ 0xcb16ba14, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x2052cdd6, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4cb371f5, __VMLINUX_SYMBOL_STR(inet6_csk_route_req) },
	{ 0x5a456888, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0x5a13610f, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x140f0736, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x38629956, __VMLINUX_SYMBOL_STR(dccp_reqsk_init) },
	{ 0xbd86f02f, __VMLINUX_SYMBOL_STR(dccp_close) },
	{ 0x257c4699, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xd87e2a8e, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x9a123b7, __VMLINUX_SYMBOL_STR(dccp_orphan_count) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x5d2e3f0b, __VMLINUX_SYMBOL_STR(dccp_sync_mss) },
	{ 0x2a954ebe, __VMLINUX_SYMBOL_STR(inet6_hash_connect) },
	{ 0xe984e706, __VMLINUX_SYMBOL_STR(inet_accept) },
	{ 0x62bf0ce0, __VMLINUX_SYMBOL_STR(inet_csk_reqsk_queue_drop_and_put) },
	{ 0x367dff73, __VMLINUX_SYMBOL_STR(sk_filter_trim_cap) },
	{ 0xbaf06326, __VMLINUX_SYMBOL_STR(inet_csk_get_port) },
	{ 0x14b80968, __VMLINUX_SYMBOL_STR(dccp_death_row) },
	{ 0x722d97f4, __VMLINUX_SYMBOL_STR(inet_ctl_sock_create) },
	{ 0x28780949, __VMLINUX_SYMBOL_STR(dccp_poll) },
	{ 0x39127eb3, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0xef4719d7, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x577027d8, __VMLINUX_SYMBOL_STR(dccp_disconnect) },
	{ 0xe8cae5c5, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x62d42cb2, __VMLINUX_SYMBOL_STR(dccp_done) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x64a91ba7, __VMLINUX_SYMBOL_STR(inet_reqsk_alloc) },
	{ 0xa728d529, __VMLINUX_SYMBOL_STR(dccp_v4_send_check) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3a4f78d5, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xf0e36f0e, __VMLINUX_SYMBOL_STR(inet_stream_connect) },
	{ 0xb4accdb9, __VMLINUX_SYMBOL_STR(dccp_invalid_packet) },
	{ 0x5c6d96c5, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x377eed95, __VMLINUX_SYMBOL_STR(inet_ehash_nolisten) },
	{ 0xf315fec1, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x4cdd391d, __VMLINUX_SYMBOL_STR(dccp_feat_list_purge) },
	{ 0xa38c0d48, __VMLINUX_SYMBOL_STR(dccp_syn_ack_timeout) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xea7adfd2, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x25d1326, __VMLINUX_SYMBOL_STR(inet_csk_reqsk_queue_hash_add) },
	{ 0xbe97856b, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x9d03ac45, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x65152423, __VMLINUX_SYMBOL_STR(inet6_sk_rebuild_header) },
	{ 0x54c754e8, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x3397b512, __VMLINUX_SYMBOL_STR(security_req_classify_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe1761617, __VMLINUX_SYMBOL_STR(security_inet_conn_request) },
	{ 0x69ec7f14, __VMLINUX_SYMBOL_STR(inet_dccp_listen) },
	{ 0x5cc41b0c, __VMLINUX_SYMBOL_STR(__inet_inherit_port) },
	{ 0xbe3ea4b5, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xe200f872, __VMLINUX_SYMBOL_STR(secure_dccpv6_sequence_number) },
	{ 0xb3fab74, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0x75fd2cb5, __VMLINUX_SYMBOL_STR(inet_csk_accept) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xaeffd9b9, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xddc30d43, __VMLINUX_SYMBOL_STR(dccp_reqsk_send_ack) },
	{ 0xe373ab4b, __VMLINUX_SYMBOL_STR(dccp_rcv_state_process) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x9c3e7d43, __VMLINUX_SYMBOL_STR(dccp_connect) },
	{ 0x71ba56ec, __VMLINUX_SYMBOL_STR(dccp_shutdown) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x14768e89, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x63380c52, __VMLINUX_SYMBOL_STR(dccp_v4_connect) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xbccf8507, __VMLINUX_SYMBOL_STR(inet6_csk_addr2sockaddr) },
	{ 0x3aba02c, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dccp,dccp_ipv4";


MODULE_INFO(srcversion, "9A177F5E92B022D4396AA1E");