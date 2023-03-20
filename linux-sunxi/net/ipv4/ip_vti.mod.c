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
	{ 0x41bf037d, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x9831fc28, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0xf4692fa5, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x4207bcc0, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xfc079e36, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x451229cd, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x46f19b01, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xd96bdafd, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x1e0d7264, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x55d4d572, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xab84ac9d, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0xc526100e, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb5fee809, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xb1a51201, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0x9eaf9267, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x9759aeb1, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x54c754e8, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xaec7642b, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x205e59df, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x203978c4, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x100370d0, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x469e1bd6, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x221bc423, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xb0c74fb1, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2de4cd6d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2cb152d3, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x773c38c5, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfdd45232, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x6d0df26, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x58e96a28, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x37f85b94, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "82FFDA27BF7D0C79E6AD71A");
