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
	{ 0xfd31f1ba, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x560877c1, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x7fb5172b, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x3e517218, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x7e9efe8e, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x7f84a9d6, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0xd5dc1f45, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5b054209, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xf0c35112, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc7ec6c27, __VMLINUX_SYMBOL_STR(strspn) },
	{ 0x658d58d6, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xc8e642c8, __VMLINUX_SYMBOL_STR(sunxi_mmc_check_r1_ready) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x342568b5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x4349cbf5, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0xc9b8ba69, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x31e45afb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x1e8dffd3, __VMLINUX_SYMBOL_STR(sunxi_wlan_get_oob_irq_flags) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xdba1513f, __VMLINUX_SYMBOL_STR(sunxi_wlan_get_bus_index) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x8b916b18, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xaa39f25a, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x14475699, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x4cabed9, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0x6d407862, __VMLINUX_SYMBOL_STR(sunxi_wlan_custom_mac_address) },
	{ 0xd5a7c4c9, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0x7fe1a403, __VMLINUX_SYMBOL_STR(cfg80211_find_ie) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1bb996e, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x50426df4, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc653e210, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb48677a, __VMLINUX_SYMBOL_STR(__kfifo_init) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x755cc6ee, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x3ec21961, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x661601de, __VMLINUX_SYMBOL_STR(sprint_symbol) },
	{ 0xa203e53a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xd446305a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xf0ca0c20, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbc8e7f5, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xc0212bfc, __VMLINUX_SYMBOL_STR(sdio_writel) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6bd02a78, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xb05f16c3, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x9a60f80e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe694413e, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xd627480b, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0xe85e0606, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x79c5a9f0, __VMLINUX_SYMBOL_STR(ioremap) },
	{ 0x2c1bcc4f, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xd05a2b02, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xb4a05945, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x14d4a9c5, __VMLINUX_SYMBOL_STR(_change_bit) },
	{ 0x618a66bb, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xcae84b25, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x370cc68d, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x392b0ca4, __VMLINUX_SYMBOL_STR(sdio_readl) },
	{ 0x830f1ed4, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x539040ef, __VMLINUX_SYMBOL_STR(set_cpus_allowed_ptr) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3d511dc1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x28c069a8, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0x96ffb08a, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xb4d0269c, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x3b950b34, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x42129767, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xdc8c8134, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x86cc1565, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xe07ca631, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x6750e7c8, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3df5ebb5, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x62349046, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x91734570, __VMLINUX_SYMBOL_STR(sunxi_wlan_set_power) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x384d8cde, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0x344d61fc, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xb738985b, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0xbaa670ba, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x84d61935, __VMLINUX_SYMBOL_STR(sunxi_wlan_get_oob_irq) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x88b7690a, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_notify) },
	{ 0x4f9c916b, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xf1050ccc, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x9ddb3815, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xf1896564, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x485ba8fa, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0xfd02e3d0, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0xc3a3dc82, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xee3f3382, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x6d4fa093, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x48397f1, __VMLINUX_SYMBOL_STR(__pskb_copy_fclone) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0xe8974134, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x45feed25, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x96a7de5e, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x932eb7db, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x3189cee3, __VMLINUX_SYMBOL_STR(sdio_writew) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x5192f20c, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x78153e1b, __VMLINUX_SYMBOL_STR(pm_stay_awake) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3cc6aab7, __VMLINUX_SYMBOL_STR(sunxi_mmc_rescan_card) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf73262d9, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0xffb0f648, __VMLINUX_SYMBOL_STR(pm_relax) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf985e7ec, __VMLINUX_SYMBOL_STR(sdio_reset_comm) },
	{ 0xd15df30, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x48eb5134, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x50f859b9, __VMLINUX_SYMBOL_STR(sdio_readw) },
	{ 0x35de3304, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x11bb3b50, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa3ddd719, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x71a07c1f, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xf891a1d2, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x9a7f6578, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0xdc461430, __VMLINUX_SYMBOL_STR(irq_set_affinity_hint) },
	{ 0xe1a7c55e, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x2adec911, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x837d0f0a, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0x8b5e9729, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x7183d38a, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x5a1b505b, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xab15ab82, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x7004326e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x7be72031, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v02D0d0000*");
MODULE_ALIAS("sdio:c*v02D0d0492*");
MODULE_ALIAS("sdio:c*v02D0d0493*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4319*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0dA8E7*");
MODULE_ALIAS("sdio:c00v*d*");

MODULE_INFO(srcversion, "3989BA36D6150CFF470C2AE");