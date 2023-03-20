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
	{ 0x255d1511, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0xd19d1a53, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xbf443830, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x96ca7377, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xbfe46639, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xa7e2e059, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xd32dde9a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x34b6a497, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x7c54b045, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xda8e2cc6, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0xd96bdafd, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x3a4f78d5, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x3612388d, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0x2295aca2, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xef4719d7, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xc526100e, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xf924e89e, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xe94bd63b, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0xb7e9ba28, __VMLINUX_SYMBOL_STR(ppp_dev_name) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xdb954a36, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xd87e2a8e, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x8439d663, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xa44fd25c, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0x1e9e8c8b, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x14be15e2, __VMLINUX_SYMBOL_STR(l2tp_session_queue_purge) },
	{ 0x746ca43c, __VMLINUX_SYMBOL_STR(__l2tp_session_unhash) },
	{ 0x778c458, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xf6f753a3, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0xfa2eeb6e, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x758153f8, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x95505558, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0x540f47a9, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4e7ddcf0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x3bf82b00, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x2de4cd6d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x865d350f, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x122e9d0b, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf4df5d00, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x2e7a1bda, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x4c23be5b, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xcbdb07a4, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x8b513341, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6d6e3550, __VMLINUX_SYMBOL_STR(l2tp_udp_encap_recv) },
	{ 0x24a5f0d3, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x17b37f2d, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x257c4699, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5591dcbc, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0xbd5b9b04, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x2bbbc88b, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core,l2tp_netlink";


MODULE_INFO(srcversion, "74ACE6A67B1D323D097EDC3");
