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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x563b636f, __VMLINUX_SYMBOL_STR(vfe_streamoff_special) },
	{ 0x31448b3a, __VMLINUX_SYMBOL_STR(vfe_register_buffer_done_callback) },
	{ 0xa750ba04, __VMLINUX_SYMBOL_STR(vfe_dqbuffer_special) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaa39f25a, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xc4a0fa2d, __VMLINUX_SYMBOL_STR(os_mem_alloc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe62babc7, __VMLINUX_SYMBOL_STR(vfe_s_input_special) },
	{ 0x2571ecad, __VMLINUX_SYMBOL_STR(vfe_close_special) },
	{ 0x27cd6d6f, __VMLINUX_SYMBOL_STR(vfe_g_fmt_special) },
	{ 0x3ec21961, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe6cf3d94, __VMLINUX_SYMBOL_STR(vfe_streamon_special) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa71fbd1c, __VMLINUX_SYMBOL_STR(vfe_s_fmt_special) },
	{ 0x671a7cda, __VMLINUX_SYMBOL_STR(vfe_qbuffer_special) },
	{ 0x4626c765, __VMLINUX_SYMBOL_STR(vfe_open_special) },
	{ 0x13125575, __VMLINUX_SYMBOL_STR(os_mem_free) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe1a7c55e, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x7025d533, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0xab15ab82, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vfe_v4l2,vfe_io";


MODULE_INFO(srcversion, "A608D07A4599319F739658D");
