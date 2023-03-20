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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd666a343, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0xe8fea651, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5d153a7a, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0xfe009c06, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x609de6ec, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x3c44f3c1, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xac84abc4, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x11025677, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x488f33ba, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0x4c23be5b, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xdf05e4d7, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x4e7ddcf0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x8b513341, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x624c5fd, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x2f603042, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xbf443830, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x9597bf5b, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6a0a99e3, __VMLINUX_SYMBOL_STR(sock_efree) },
	{ 0x9955a327, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x7c54b045, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x91929fbb, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xda8e2cc6, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x540f47a9, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x2797ff41, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xbfe46639, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x34b6a497, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xa3075ef6, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x257c4699, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xecab22aa, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x96ca7377, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xaee49bc3, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0x88c29a39, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0x48c47019, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd32dde9a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1ef5f14f, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x192441c6, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x15da4d1a, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8749894c, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x46387c81, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "DEA0868B4B066B0E64104FB");
