#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb98e78a1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x74dcd98c, __VMLINUX_SYMBOL_STR(dm_bufio_get_aux_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x62a23587, __VMLINUX_SYMBOL_STR(dm_bufio_get_device_size) },
	{ 0xe004ee92, __VMLINUX_SYMBOL_STR(dm_bufio_new) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa82b2066, __VMLINUX_SYMBOL_STR(dm_bufio_write_dirty_buffers) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7c381a76, __VMLINUX_SYMBOL_STR(dm_bufio_get_block_size) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x19f5809b, __VMLINUX_SYMBOL_STR(dm_ratelimit_state) },
	{ 0xe6024e59, __VMLINUX_SYMBOL_STR(dm_bufio_release) },
	{ 0x29a9ba11, __VMLINUX_SYMBOL_STR(dm_bufio_client_create) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xebcc64a4, __VMLINUX_SYMBOL_STR(dm_bufio_get_block_data) },
	{ 0xeca7949e, __VMLINUX_SYMBOL_STR(dm_bufio_client_destroy) },
	{ 0xdc69e37a, __VMLINUX_SYMBOL_STR(dm_bufio_get_block_number) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xee3f3382, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x594952bd, __VMLINUX_SYMBOL_STR(dm_bufio_read) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xad0dc4f, __VMLINUX_SYMBOL_STR(dm_bufio_mark_buffer_dirty) },
	{ 0x9b2b253a, __VMLINUX_SYMBOL_STR(dm_bufio_get) },
	{ 0xd36ee94f, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x3909d3a8, __VMLINUX_SYMBOL_STR(dm_bufio_prefetch) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x6d3f57bd, __VMLINUX_SYMBOL_STR(dm_bufio_get_client) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E1B95FABB0BFD063DC6C713");
