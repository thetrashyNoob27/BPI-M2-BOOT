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
	{ 0xac84abc4, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x25e426b6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2098d41b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb2059779, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x91929fbb, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xc1a69ea6, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcce415ab, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xd1bc3b50, __VMLINUX_SYMBOL_STR(disable_wakeup_src) },
	{ 0xdb87ba3a, __VMLINUX_SYMBOL_STR(enable_wakeup_src) },
	{ 0x98c273a7, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x265069ca, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xc279e594, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xbc1b2d1d, __VMLINUX_SYMBOL_STR(sw_uart_get_pdev) },
	{ 0x50b95842, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xf73262d9, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x42129767, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x31e45afb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xdf9ed4db, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0xde26af42, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe8fea651, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9D0D15691ABAA357C795A45");
