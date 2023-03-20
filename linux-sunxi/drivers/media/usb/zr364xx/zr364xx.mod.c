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
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x864a2e35, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xeb62515e, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xeb06bec1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x42564172, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x841caba, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x38ff8adb, __VMLINUX_SYMBOL_STR(videobuf_queue_is_busy) },
	{ 0x5f74b021, __VMLINUX_SYMBOL_STR(videobuf_read_one) },
	{ 0x62ae7cf9, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0x3b3b00fa, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x33541bb5, __VMLINUX_SYMBOL_STR(videobuf_iolock) },
	{ 0x8a3435ed, __VMLINUX_SYMBOL_STR(videobuf_vmalloc_free) },
	{ 0x234f0b95, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf17927ec, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x7e8c7c33, __VMLINUX_SYMBOL_STR(videobuf_queue_vmalloc_init) },
	{ 0x80d2d58d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe60e0d06, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xebf96c36, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xb8c2c64c, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78f082b6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xd0f10bdf, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0x84bbb1dd, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xc1570f3e, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0xb6a15626, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x702a0495, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x81a05a85, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2a9d8ce0, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0xd9334f5e, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0xdad119d2, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0xf7787f11, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0xaada6c74, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
	{ 0x3d0244d4, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xf92fb1cb, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d6a0bca, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x3e4ad10c, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6df310a7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc4f3d5d, __VMLINUX_SYMBOL_STR(videobuf_to_vmalloc) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x45bb497a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x87d9f40f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videobuf-vmalloc";

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EE3E7F3C832E6702CC888D4");
