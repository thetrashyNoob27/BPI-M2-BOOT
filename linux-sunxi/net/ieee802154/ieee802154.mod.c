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
	{ 0xfc5915f0, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1d9f4ace, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd8821230, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x90c3e7f0, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x242acfff, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xacf6bce6, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb216844a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x94bd962, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xc99085c7, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x5fdb1e1, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xae20e8b8, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x1d924dd3, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xecab22aa, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xdc8c8134, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xc3b56021, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf70e4a4d, __VMLINUX_SYMBOL_STR(preempt_schedule_notrace) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xc22e55ae, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x94e8489c, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x6f127d59, __VMLINUX_SYMBOL_STR(class_for_each_device) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x34786e7, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xeca22b63, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x4a51f8cd, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2e68b56a, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xaa4003b4, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xa57673d0, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xca4218db, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x34b306a8, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x6cdc5c6b, __VMLINUX_SYMBOL_STR(nla_strlcpy) },
	{ 0xcc52fcfa, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x1ff6c8b8, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x629aea35, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0xcae3b44f, __VMLINUX_SYMBOL_STR(trace_output_call) },
	{ 0x8e659150, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6A775AD3909CD2A0D431429");
