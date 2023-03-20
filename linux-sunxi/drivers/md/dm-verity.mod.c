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
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x17533e03, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x1e7bbcb3, __VMLINUX_SYMBOL_STR(kernel_restart) },
	{ 0x74dcd98c, __VMLINUX_SYMBOL_STR(dm_bufio_get_aux_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x50ec33ba, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x62a23587, __VMLINUX_SYMBOL_STR(dm_bufio_get_device_size) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x43f23311, __VMLINUX_SYMBOL_STR(dm_table_get_md) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe376504e, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x44452faa, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xc7a445f0, __VMLINUX_SYMBOL_STR(dm_disk) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe3baeb78, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xe04f7caa, __VMLINUX_SYMBOL_STR(dm_read_arg_group) },
	{ 0x3ada2992, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa085c6, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x19f5809b, __VMLINUX_SYMBOL_STR(dm_ratelimit_state) },
	{ 0xf97333cd, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xe6024e59, __VMLINUX_SYMBOL_STR(dm_bufio_release) },
	{ 0x29a9ba11, __VMLINUX_SYMBOL_STR(dm_bufio_client_create) },
	{ 0x5eb24829, __VMLINUX_SYMBOL_STR(dm_shift_arg) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x806fcef2, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x12b35ca8, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xf176e82, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xeca7949e, __VMLINUX_SYMBOL_STR(dm_bufio_client_destroy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x186ba5de, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xaa4a7797, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x594952bd, __VMLINUX_SYMBOL_STR(dm_bufio_read) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x3909d3a8, __VMLINUX_SYMBOL_STR(dm_bufio_prefetch) },
	{ 0xf5622f2c, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe1a7c55e, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "13015891363F5B9EFED998B");
