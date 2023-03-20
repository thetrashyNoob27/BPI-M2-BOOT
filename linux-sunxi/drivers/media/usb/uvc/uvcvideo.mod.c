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
	{ 0xeb62515e, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x4be85a03, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xe60f3997, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x6b95007a, __VMLINUX_SYMBOL_STR(v4l2_event_queue_fh) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc0899f2f, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x20029ec7, __VMLINUX_SYMBOL_STR(usb_debug_root) },
	{ 0x84bbb1dd, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xc1b96174, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x1689c8b4, __VMLINUX_SYMBOL_STR(vb2_create_bufs) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe9b89cff, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf17927ec, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5200f351, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xc19a364f, __VMLINUX_SYMBOL_STR(usb_enable_autosuspend) },
	{ 0xd1a5aaf8, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x1b5c0864, __VMLINUX_SYMBOL_STR(v4l2_ctrl_merge) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa621a504, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x915ab182, __VMLINUX_SYMBOL_STR(media_entity_cleanup) },
	{ 0xb8c2c64c, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xcce415ab, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x384bc986, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x54a07e18, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x81a05a85, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5f207e50, __VMLINUX_SYMBOL_STR(v4l2_event_subscribe) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb77b0159, __VMLINUX_SYMBOL_STR(v4l2_prio_init) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3e4ad10c, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xcae1d21d, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xe27cb19d, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x874c13d0, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x5394b42, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd860d4eb, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf941a8e, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0x858f12f1, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xf98a72ee, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0x67255b93, __VMLINUX_SYMBOL_STR(media_entity_init) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x4b77c88d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_replace) },
	{ 0x4821646d, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0x61a2849b, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x3d0244d4, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa151afa2, __VMLINUX_SYMBOL_STR(vb2_expbuf) },
	{ 0x265069ca, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x4b4bf10e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xd243572a, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xc46db083, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x98c273a7, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0xf79f185e, __VMLINUX_SYMBOL_STR(v4l2_device_register_subdev) },
	{ 0xf6284e66, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xcadd034e, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5669fdd2, __VMLINUX_SYMBOL_STR(v4l2_subdev_init) },
	{ 0x19d58062, __VMLINUX_SYMBOL_STR(__media_device_register) },
	{ 0x59bbecc2, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa343bcdb, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xc56475b5, __VMLINUX_SYMBOL_STR(usb_match_one_id) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x15ab6271, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x9ba55407, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0xbceeeb54, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd7767f91, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x858affd7, __VMLINUX_SYMBOL_STR(vb2_poll) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x188cb98b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xe57cb0dd, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0xf63fa1ff, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xe1a7c55e, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xa78682c0, __VMLINUX_SYMBOL_STR(media_entity_create_link) },
	{ 0x5c909c9e, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0x6df310a7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xaa0a3ca1, __VMLINUX_SYMBOL_STR(media_device_unregister) },
	{ 0x864a2e35, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xad2a53fb, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x87d9f40f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x833f53fc, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x3d635c02, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0xc279e594, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x24652f08, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videobuf2-v4l2,videobuf2-vmalloc";

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");

MODULE_INFO(srcversion, "9F8EA90F3C9B5C9BFFF5ECB");
