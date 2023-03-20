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
	{ 0x9348d4d6, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x2d4aa4da, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x819f2248, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0xce7429c1, __VMLINUX_SYMBOL_STR(genphy_config_init) },
	{ 0xe92261a0, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x9b1f7923, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0x56e6d72, __VMLINUX_SYMBOL_STR(phy_read_mmd_indirect) },
	{ 0xdea79832, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xddea701d, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0xe4e2552, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x47620e99, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x716fefa0, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0000000000000111110000010011????");

MODULE_INFO(srcversion, "3D3085121E1BE36480D4CA0");
