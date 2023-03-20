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
	{ 0xc526100e, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4207bcc0, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xf4692fa5, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x2de4cd6d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xaa55cbad, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x71a4e05b, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x203978c4, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x469e1bd6, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x282afdab, __VMLINUX_SYMBOL_STR(__ip_tunnel_change_mtu) },
	{ 0x95d5237e, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xbee91f14, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8cceb550, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe55dbc1f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6d0df26, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x9831fc28, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0xbb4d4ed5, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x67112da3, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0x58e96a28, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd96bdafd, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x451229cd, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xb4a05945, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x36c9e365, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xb1343b19, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x9eaf9267, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x221bc423, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x41bf037d, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x46f19b01, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xfdd45232, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x37f85b94, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb6bb9359, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xaec7642b, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xa78e2c43, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0x122e9d0b, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xe02d314d, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xb5fee809, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x10e96c52, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xbdb9d8fc, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x4d48877f, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0xfb3e43f3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x55d4d572, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x746c6d0d, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0xccab6c76, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xfc079e36, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x4bd87ee2, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xf6072958, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0x509b7679, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0xe010c5bf, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gre";


MODULE_INFO(srcversion, "93171AC312FA3A4DF1B714B");
