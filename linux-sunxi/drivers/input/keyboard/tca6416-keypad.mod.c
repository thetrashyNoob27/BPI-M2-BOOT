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
	{ 0x9974da96, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xfd375a9, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x98c273a7, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x631ee43a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x15817043, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x3df5ebb5, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x265069ca, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xf73262d9, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x31e45afb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xa3116104, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc279e594, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9cf3dacc, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcce415ab, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x7f921cac, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x40027b5f, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa343bcdb, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tca6416-keys");
MODULE_ALIAS("i2c:tca6408-keys");

MODULE_INFO(srcversion, "C3C1F7C062FAE09C34C4047");
