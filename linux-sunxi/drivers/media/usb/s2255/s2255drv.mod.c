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
	{ 0x15ab6271, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xe9b89cff, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xe2fcb862, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x64bb8af3, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x864a2e35, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x7387f7f0, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x718cafcd, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xeb62515e, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xeb06bec1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x42564172, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x6ab98e1e, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x341f5f96, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xbbd679c0, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x5f0b4e65, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x98b07418, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x7519267, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x384bc986, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf17927ec, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x24652f08, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x90a14370, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0xe60e0d06, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xebf96c36, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xb8c2c64c, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x1457f200, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xecbc4012, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x87d9f40f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x61a2849b, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x702a0495, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x78f082b6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x3e4ad10c, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x7d6a0bca, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x84bbb1dd, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x4b4bf10e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x20a3c5db, __VMLINUX_SYMBOL_STR(mutex_destroy) },
	{ 0xf253f25f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x6df310a7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x45bb497a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x963bcc3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2d26930f, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3d0244d4, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x5394b42, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x874c13d0, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videobuf2-vmalloc,videobuf2-core";

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3672830A13380BCD60BD47E");
