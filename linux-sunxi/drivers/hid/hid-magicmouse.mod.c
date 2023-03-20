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
	{ 0x95d5237e, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x910acb00, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0xee0bf410, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x33a24427, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x96c00397, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0xb5d991f9, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x130f1f4e, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0xff95cbca, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x88a5f824, __VMLINUX_SYMBOL_STR(hid_register_report) },
	{ 0xbd4d0b9c, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x772fb250, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x52c10015, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa5f6bee6, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xcce415ab, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0005g*v000005ACp0000030D");
MODULE_ALIAS("hid:b0005g*v000005ACp0000030E");

MODULE_INFO(srcversion, "0118E6DA739EF05D95C55B4");
