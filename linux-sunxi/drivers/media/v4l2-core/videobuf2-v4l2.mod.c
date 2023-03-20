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
	{ 0x808993f2, __VMLINUX_SYMBOL_STR(vb2_core_streamoff) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x58caea6e, __VMLINUX_SYMBOL_STR(vb2_core_dqbuf) },
	{ 0xc0899f2f, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x269bb3bf, __VMLINUX_SYMBOL_STR(vb2_core_qbuf) },
	{ 0xe3a825df, __VMLINUX_SYMBOL_STR(vb2_core_querybuf) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x2d328655, __VMLINUX_SYMBOL_STR(vb2_debug) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x50426df4, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x19d7a812, __VMLINUX_SYMBOL_STR(vb2_core_streamon) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x52b40328, __VMLINUX_SYMBOL_STR(vb2_core_prepare_buf) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x447fa5a7, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x81a05a85, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x394c838b, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x98a686d7, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0x874c13d0, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3b3b00fa, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x6c01fea6, __VMLINUX_SYMBOL_STR(vb2_core_queue_release) },
	{ 0x18c61a41, __VMLINUX_SYMBOL_STR(vb2_queue_error) },
	{ 0x3d0244d4, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xee3f3382, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x799cbdd0, __VMLINUX_SYMBOL_STR(vb2_core_create_bufs) },
	{ 0x3113a148, __VMLINUX_SYMBOL_STR(vb2_core_expbuf) },
	{ 0xd187e10e, __VMLINUX_SYMBOL_STR(vb2_core_reqbufs) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x68b4dc71, __VMLINUX_SYMBOL_STR(vb2_verify_memory_type) },
	{ 0xbdbb0ac2, __VMLINUX_SYMBOL_STR(vb2_core_queue_init) },
	{ 0xda9f3ab7, __VMLINUX_SYMBOL_STR(vb2_buffer_in_use) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core";


MODULE_INFO(srcversion, "BBE1492A5BC5CBB8A67E644");
