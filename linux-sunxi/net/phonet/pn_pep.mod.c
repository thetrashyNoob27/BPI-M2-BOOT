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
	{ 0xbe6b67b5, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x758153f8, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x24a5f0d3, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xe34eef32, __VMLINUX_SYMBOL_STR(pn_sock_unhash) },
	{ 0x92d3d940, __VMLINUX_SYMBOL_STR(sk_stream_wait_connect) },
	{ 0x4c23be5b, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x920c0215, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4e7ddcf0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x8b513341, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa24a5d58, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x2fc12dad, __VMLINUX_SYMBOL_STR(pn_sock_hash) },
	{ 0x1854e606, __VMLINUX_SYMBOL_STR(phonet_proto_register) },
	{ 0x7785104, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0xe5e47fd9, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xa203e53a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xd446305a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x79f349d7, __VMLINUX_SYMBOL_STR(pn_sock_get_port) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x778c458, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9a60f80e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x17b37f2d, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xcbdb07a4, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x540f47a9, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xb4a05945, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xcae84b25, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x257c4699, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xe5859848, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3500abf3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x4d152c28, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x10c06828, __VMLINUX_SYMBOL_STR(phonet_proto_unregister) },
	{ 0xea7adfd2, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xe313f82e, __VMLINUX_SYMBOL_STR(pn_skb_send) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x777c3f7a, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x48eb5134, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x1a6e544e, __VMLINUX_SYMBOL_STR(phonet_stream_ops) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x391256e9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x46387c81, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=phonet";


MODULE_INFO(srcversion, "D2E7EC27750B02FA3C462E7");
