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
	{ 0x8752beae, __VMLINUX_SYMBOL_STR(em28xx_read_reg) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xeb62515e, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x841caba, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9df16904, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x614dd5a, __VMLINUX_SYMBOL_STR(v4l2_video_std_frame_period) },
	{ 0xbb291172, __VMLINUX_SYMBOL_STR(em28xx_write_regs) },
	{ 0x673c7274, __VMLINUX_SYMBOL_STR(v4l2_ctrl_notify) },
	{ 0x9b77b2a0, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0x84bbb1dd, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x78f082b6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0xe60e0d06, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x7387f7f0, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x341f5f96, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xe9b89cff, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x7359928a, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf17927ec, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x66dbce7f, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0xb8c2c64c, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x718cafcd, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7d6a0bca, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x384bc986, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x64bb8af3, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x5f0b4e65, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x81a05a85, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3e4ad10c, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xcae1d21d, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xeb06bec1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x874c13d0, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x5394b42, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x77eb2093, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc02b12a9, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x13a09271, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x68000e55, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0xbbd679c0, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x7a8259b7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0xe2fcb862, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x3d0244d4, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcaa9f9e8, __VMLINUX_SYMBOL_STR(em28xx_audio_setup) },
	{ 0x333eddb9, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister_fixed) },
	{ 0x80d2d58d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x9c3b024a, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x702a0495, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xe0d74b94, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x98b07418, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x16179ea4, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xebf96c36, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x15ab6271, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xb51d03b9, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa0e8872d, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x35e2b381, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0x6ab98e1e, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x864a2e35, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x6d578f78, __VMLINUX_SYMBOL_STR(em28xx_boards) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x6ba3ee5, __VMLINUX_SYMBOL_STR(em28xx_init_camera) },
	{ 0x24652f08, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,em28xx,videobuf2-vmalloc,videobuf2-core";


MODULE_INFO(srcversion, "769279BA70B826DC169E8A3");
