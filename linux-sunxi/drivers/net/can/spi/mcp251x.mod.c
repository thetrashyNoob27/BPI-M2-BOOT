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
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x86548b4c, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x956a0959, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x79a08496, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x5e427b94, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x11692767, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0xdfcb8e71, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x7bc4a278, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x777790b5, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x9a60f80e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x460969f4, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x2b5796ad, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf9c0aea, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0xc3d3a73e, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x7537f3a2, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x3821d96d, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xabb1c89c, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x57a284dc, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x43dd6fd7, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x6bd02a78, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xb77d50ff, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xc68b7f, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x501e6870, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8e31ce14, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x35f932, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0xc59902f6, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7189e838, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515*");

MODULE_INFO(srcversion, "B646E18E95C132179C02575");
