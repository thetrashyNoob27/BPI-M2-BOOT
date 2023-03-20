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
	{ 0x7519267, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xeb62515e, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xb4cae96b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0x841caba, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xd2c1c2f4, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x42564172, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x84bbb1dd, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x78f082b6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xe60e0d06, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x7387f7f0, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x341f5f96, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe9b89cff, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf17927ec, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb8c2c64c, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x718cafcd, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xcce415ab, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xd8fe32b2, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7d6a0bca, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x384bc986, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x54a07e18, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x64bb8af3, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x5f0b4e65, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x81a05a85, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3e4ad10c, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xcae1d21d, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xeb06bec1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x874c13d0, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x5394b42, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x90a14370, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0x858f12f1, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xbbd679c0, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xe2fcb862, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x3d0244d4, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x265069ca, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x98c273a7, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x495426ee, __VMLINUX_SYMBOL_STR(v4l2_ctrl_get_name) },
	{ 0x3043b032, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x702a0495, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x98b07418, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa343bcdb, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x16179ea4, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xebf96c36, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x15ab6271, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd7767f91, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x188cb98b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x6ab98e1e, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xf92fb1cb, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x6df310a7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x864a2e35, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x87d9f40f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xc279e594, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x24652f08, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videobuf2-vmalloc,videobuf2-core";

MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2FF1339C0F7D673AB467AE9");
