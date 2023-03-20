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
	{ 0x689f370d, __VMLINUX_SYMBOL_STR(frame_vector_to_pages) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xab9db7cb, __VMLINUX_SYMBOL_STR(ion_unmap_kernel) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x52e96379, __VMLINUX_SYMBOL_STR(vb2_destroy_framevec) },
	{ 0x3f3acc0, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x342568b5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x1c803b74, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0xfe7c8be6, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0x6f189d7a, __VMLINUX_SYMBOL_STR(ion_free) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xab31d65a, __VMLINUX_SYMBOL_STR(vb2_create_framevec) },
	{ 0xff0b774a, __VMLINUX_SYMBOL_STR(dma_buf_vunmap) },
	{ 0x9d5bb7fe, __VMLINUX_SYMBOL_STR(dma_common_get_sgtable) },
	{ 0xba05683b, __VMLINUX_SYMBOL_STR(ion_map_kernel) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2989578c, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5ca1b9e8, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0x22df9a07, __VMLINUX_SYMBOL_STR(ion_alloc) },
	{ 0x27804afb, __VMLINUX_SYMBOL_STR(sunxi_ion_client_create) },
	{ 0xcdd158d, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x45a5a7dc, __VMLINUX_SYMBOL_STR(ion_share_dma_buf) },
	{ 0x2e60b2ee, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0x257e60bd, __VMLINUX_SYMBOL_STR(dma_buf_export) },
	{ 0x4a51f8cd, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfcdc14d6, __VMLINUX_SYMBOL_STR(frame_vector_to_pfns) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf8a11608, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0xaa4003b4, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xd0181486, __VMLINUX_SYMBOL_STR(ion_phys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd35acb57, __VMLINUX_SYMBOL_STR(dma_buf_mmap) },
	{ 0x13b371e7, __VMLINUX_SYMBOL_STR(vb2_common_vm_ops) },
	{ 0x26714f2f, __VMLINUX_SYMBOL_STR(ion_client_destroy) },
	{ 0xbff5fe4d, __VMLINUX_SYMBOL_STR(sg_alloc_table_from_pages) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x77bd571c, __VMLINUX_SYMBOL_STR(dma_buf_vmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-memops";


MODULE_INFO(srcversion, "C5305E4A7F94E05C70E3117");
