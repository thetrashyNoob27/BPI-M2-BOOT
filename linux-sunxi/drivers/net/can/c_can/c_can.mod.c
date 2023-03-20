#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb98e78a1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x37a6c62, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xe11b979b, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x460969f4, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x34713f0b, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xedac7d2d, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xb77d50ff, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0xbdc81160, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf3bcae97, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x7537f3a2, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0xa8c1a275, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0x7da4e478, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x11692767, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x73d4bc27, __VMLINUX_SYMBOL_STR(pinctrl_get) },
	{ 0xc68b7f, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x9a60f80e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x14d4a9c5, __VMLINUX_SYMBOL_STR(_change_bit) },
	{ 0x527e7649, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1dff304f, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x8e31ce14, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0xa5eb1c7b, __VMLINUX_SYMBOL_STR(pinctrl_pm_select_sleep_state) },
	{ 0xc033b32c, __VMLINUX_SYMBOL_STR(pinctrl_put) },
	{ 0x86548b4c, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x35f932, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x57a284dc, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xecce2dc9, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x7af048df, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa96b2f8e, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x5a7d91e5, __VMLINUX_SYMBOL_STR(pinctrl_pm_select_default_state) },
	{ 0x43dd6fd7, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x7bc4a278, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x5e427b94, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xdfcb8e71, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";


MODULE_INFO(srcversion, "43931FCB0BC14056B89E805");
