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
	{ 0xd9f5be5, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xfb3e43f3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x799f9f63, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xcfb6a3da, __VMLINUX_SYMBOL_STR(unregister_atmdevice_notifier) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x6da58885, __VMLINUX_SYMBOL_STR(deregister_atm_ioctl) },
	{ 0x4443d399, __VMLINUX_SYMBOL_STR(atm_proc_root) },
	{ 0xb09faf79, __VMLINUX_SYMBOL_STR(register_atmdevice_notifier) },
	{ 0x49bddb1, __VMLINUX_SYMBOL_STR(register_atm_ioctl) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xcae84b25, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x3500abf3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xe28f0cbf, __VMLINUX_SYMBOL_STR(vcc_process_recv_queue) },
	{ 0x90a8670b, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x95dbe078, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xff1e9dd8, __VMLINUX_SYMBOL_STR(seq_list_start) },
	{ 0xe7d4daac, __VMLINUX_SYMBOL_STR(seq_list_next) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1c72bee1, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1bb996e, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x4bd87ee2, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xe02d314d, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x9a60f80e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfd02e3d0, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xd446305a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb4a05945, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x48eb5134, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbf328c0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x740fd118, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irq) },
	{ 0xb5c00014, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0xff44a438, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x920c0215, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x9cba3c37, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0xe1f0ab3a, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0x4bc9fa80, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "DC0A8930F5488B1FED4E6CA");
