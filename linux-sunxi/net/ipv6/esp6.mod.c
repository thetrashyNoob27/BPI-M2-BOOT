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
	{ 0xba077299, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0xda7cd1c8, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x39ab37b1, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xe042c659, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x36c751dc, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0xf3a5144d, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xe114cb, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x67cdc4e8, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x7d9638b8, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x16cde913, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xc0448d42, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x2f54af0c, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x186ba5de, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x7796c726, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xcd4b4144, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x391256e9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xab1e69e6, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd53eb7c6, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x205e59df, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x4e171913, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xa502126c, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x100370d0, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "689B342BB413D4C60F6E147");
