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
	{ 0xe1844ed8, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x24a5f0d3, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe8fea651, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xac84abc4, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xdb954a36, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xf67111eb, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xc006717b, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0x9597bf5b, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x778c458, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x6a0a99e3, __VMLINUX_SYMBOL_STR(sock_efree) },
	{ 0x6bd02a78, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x91929fbb, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x17b37f2d, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2797ff41, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x140f0736, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x257c4699, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8c59dab7, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xbf328c0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xef4719d7, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x3ce74a49, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xfb644a26, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3a4f78d5, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xac7eadfa, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xbd1ea2d5, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xe13e9a1d, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x1dd2d14, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A6CE7AF8D9995FE351B1D6F");
