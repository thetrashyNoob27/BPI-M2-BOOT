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
	{ 0x148a40d6, __VMLINUX_SYMBOL_STR(passthrough_attrib_attrs) },
	{ 0x2bd81dd6, __VMLINUX_SYMBOL_STR(target_backend_unregister) },
	{ 0x43556992, __VMLINUX_SYMBOL_STR(transport_backend_register) },
	{ 0x72ea7b2d, __VMLINUX_SYMBOL_STR(scsi_device_type) },
	{ 0x4593e3e5, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0xb2b924f1, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2de3b18, __VMLINUX_SYMBOL_STR(transport_set_vpd_ident) },
	{ 0x7dbada9d, __VMLINUX_SYMBOL_STR(transport_set_vpd_ident_type) },
	{ 0x85aa880c, __VMLINUX_SYMBOL_STR(transport_set_vpd_assoc) },
	{ 0xf01621c7, __VMLINUX_SYMBOL_STR(transport_set_vpd_proto_id) },
	{ 0xb736abd0, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2dc1157e, __VMLINUX_SYMBOL_STR(passthrough_parse_cdb) },
	{ 0x71733431, __VMLINUX_SYMBOL_STR(scsi_host_lookup) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x3d92dcc0, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xbd0e6e82, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xdd66787d, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3f3acc0, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xae7d0373, __VMLINUX_SYMBOL_STR(transport_kunmap_data_sg) },
	{ 0xc9d90ac0, __VMLINUX_SYMBOL_STR(transport_kmap_data_sg) },
	{ 0x6fe1fa96, __VMLINUX_SYMBOL_STR(target_lun_is_rdonly) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xfb98da06, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x73a4ada8, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x12b35ca8, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xdf74a35d, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0x815d20ae, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x50ded839, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x7fcb5b75, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xad669f0e, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x63124c65, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x4049db5f, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "DA1EE4BC5290A72F0D0ED48");
