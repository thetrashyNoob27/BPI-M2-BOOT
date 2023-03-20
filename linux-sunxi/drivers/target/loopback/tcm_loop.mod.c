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
	{ 0x2b61f51e, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x933e46dd, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0x8ab32741, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xe1844ed8, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x8e04c405, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x1f7a99ce, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x4e44025f, __VMLINUX_SYMBOL_STR(__root_device_register) },
	{ 0xac7eadfa, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x1e6c7b7f, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0xc9fa926f, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0xbfd8cbb9, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0x4c84cded, __VMLINUX_SYMBOL_STR(transport_init_session) },
	{ 0x5c87033c, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x8e659150, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3d92dcc0, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xf620317d, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x9a9b07c, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x4214ade8, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0xa2286ac2, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x529fd696, __VMLINUX_SYMBOL_STR(root_device_unregister) },
	{ 0x71107c01, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x956a0959, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xb89eea6, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x522dccfc, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xd187e458, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xd9dc6649, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0xd6e0b6a2, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1acc343c, __VMLINUX_SYMBOL_STR(transport_generic_handle_tmr) },
	{ 0x74a0b8c4, __VMLINUX_SYMBOL_STR(transport_lookup_tmr_lun) },
	{ 0x862561dc, __VMLINUX_SYMBOL_STR(core_tmr_alloc_req) },
	{ 0x52b634ab, __VMLINUX_SYMBOL_STR(transport_init_se_cmd) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3ce74a49, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x140f0736, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xf30539d3, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x33ced729, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xdd66787d, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xea02fda0, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xfd294b84, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x4a042032, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xed298f06, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb1bca922, __VMLINUX_SYMBOL_STR(core_allocate_nexus_loss_ua) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "14832641263BB74784E293F");
