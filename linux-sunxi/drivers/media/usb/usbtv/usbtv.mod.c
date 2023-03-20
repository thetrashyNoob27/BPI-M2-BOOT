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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x841caba, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9efdcb5f, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x84bbb1dd, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x7387f7f0, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x341f5f96, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf17927ec, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x88c77a6b, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0xb8c2c64c, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x718cafcd, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x7d6a0bca, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x384bc986, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x64bb8af3, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x5f0b4e65, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3e4ad10c, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x979b605, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xcae1d21d, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x874c13d0, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x5394b42, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc02b12a9, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xb590239, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xfa7a5b3c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x68000e55, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0xbbd679c0, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x258313b5, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x5a6c5074, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x45bb497a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x61a2849b, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xe2fcb862, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x3d0244d4, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xabf55436, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0x4b4bf10e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd243572a, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x702a0495, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x98b07418, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xe177f0af, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x3788a1c0, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9e7a3835, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x28cdaf2b, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x6ab98e1e, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xf63fa1ff, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xf92fb1cb, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x6df310a7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x864a2e35, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x87d9f40f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x24652f08, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videobuf2-vmalloc,videobuf2-core";

MODULE_ALIAS("usb:v1B71p3002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5AED3E76BE2FE83EDF48343");
