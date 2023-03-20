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
	{ 0x4a19215c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x24a5f0d3, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xc613540e, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xbae4fb5d, __VMLINUX_SYMBOL_STR(iov_iter_npages) },
	{ 0x89f449af, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x98491047, __VMLINUX_SYMBOL_STR(macvlan_dellink) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xa8caaafd, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0xd8c18218, __VMLINUX_SYMBOL_STR(skb_copy_datagram_from_iter) },
	{ 0x2d9f016c, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc1b96174, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe834fd58, __VMLINUX_SYMBOL_STR(macvlan_common_newlink) },
	{ 0x4c23be5b, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xf2c8332e, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x603d75bf, __VMLINUX_SYMBOL_STR(sock_alloc_send_pskb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x98c0de57, __VMLINUX_SYMBOL_STR(macvlan_link_register) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x2d918db0, __VMLINUX_SYMBOL_STR(skb_partial_csum_set) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x778c458, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc99085c7, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x17b37f2d, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x6091644e, __VMLINUX_SYMBOL_STR(flow_keys_dissector) },
	{ 0xcbdb07a4, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xae20e8b8, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x257c4699, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x2358f3ca, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xc50f245d, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x46f19b01, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x10263a72, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xe5859848, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xd14fa61c, __VMLINUX_SYMBOL_STR(macvlan_common_setup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4cda2473, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xbcb5d5b8, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9aa9635d, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xb9acd3d9, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x15da4d1a, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x777c3f7a, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x95dbe078, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x3477cb23, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xe13e9a1d, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x58bb4334, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xa78267b3, __VMLINUX_SYMBOL_STR(zerocopy_sg_from_iter) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B9A26C89589B106584821D0");
