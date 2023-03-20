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
	{ 0xd6b96582, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x98eb5f34, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x77981f5e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xd17ceb3b, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x3bf5f143, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x14475699, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x537544fd, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xa0698be0, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05E3p0502d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E580ED2DCC4FDD5BE6D377F");
