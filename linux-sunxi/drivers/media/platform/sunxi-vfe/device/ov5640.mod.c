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
	{ 0x96ceb31e, __VMLINUX_SYMBOL_STR(cci_dev_exit_helper) },
	{ 0x92875046, __VMLINUX_SYMBOL_STR(cci_dev_init_helper) },
	{ 0x53afe9c0, __VMLINUX_SYMBOL_STR(vfe_get_standby_mode) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x99f14e66, __VMLINUX_SYMBOL_STR(cci_write_a16_d8_continuous_helper) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x736348cd, __VMLINUX_SYMBOL_STR(cci_dev_probe_helper) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xabe27502, __VMLINUX_SYMBOL_STR(v4l2_ctrl_query_fill) },
	{ 0x8c86842, __VMLINUX_SYMBOL_STR(vfe_set_pmu_channel) },
	{ 0x7c164f94, __VMLINUX_SYMBOL_STR(vfe_gpio_set_status) },
	{ 0x54639183, __VMLINUX_SYMBOL_STR(vfe_set_mclk_freq) },
	{ 0xeafdf9ae, __VMLINUX_SYMBOL_STR(vfe_set_mclk) },
	{ 0xcbd09730, __VMLINUX_SYMBOL_STR(cci_unlock) },
	{ 0xd122136c, __VMLINUX_SYMBOL_STR(vfe_gpio_write) },
	{ 0x23938012, __VMLINUX_SYMBOL_STR(cci_lock) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xa2dca20f, __VMLINUX_SYMBOL_STR(sensor_write_array) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x70d26f94, __VMLINUX_SYMBOL_STR(sensor_read) },
	{ 0xeba7bcfc, __VMLINUX_SYMBOL_STR(sensor_write) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x627d46d0, __VMLINUX_SYMBOL_STR(cci_dev_remove_helper) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vfe_io";

MODULE_ALIAS("i2c:ov5640");

MODULE_INFO(srcversion, "FFB9D824272ED384E526CC9");
