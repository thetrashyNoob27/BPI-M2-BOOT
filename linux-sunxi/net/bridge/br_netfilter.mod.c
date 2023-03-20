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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf7e32a9d, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x2c78867, __VMLINUX_SYMBOL_STR(ip_do_fragment) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x2de4cd6d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd8c143ec, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x12d86307, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xc8276a79, __VMLINUX_SYMBOL_STR(nf_hooks_needed) },
	{ 0x8b9ea2a9, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x70e65f7d, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x965a6b6e, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xb15c185d, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0x60499e87, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0x7ab2a303, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x122e9d0b, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xfb0ee91f, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0xbdb9d8fc, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcd4b4144, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x8ccdb911, __VMLINUX_SYMBOL_STR(nf_br_ops) },
	{ 0xc8a15f2f, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd5f84c3c, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xb3348446, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge";


MODULE_INFO(srcversion, "96CA697766FA5E4BE938D19");
