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
	{ 0x9974da96, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xfd375a9, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xec79a6b6, __VMLINUX_SYMBOL_STR(v4l2_async_register_subdev) },
	{ 0x80d2d58d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xe60e0d06, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xebf96c36, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xf315c552, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x631ee43a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x7f921cac, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x78f082b6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xc5f17b9a, __VMLINUX_SYMBOL_STR(v4l2_async_unregister_subdev) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "43AEE84CA0E25C9FCA7BC96");
