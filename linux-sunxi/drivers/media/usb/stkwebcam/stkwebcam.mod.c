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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x947591b5, __VMLINUX_SYMBOL_STR(remap_vmalloc_range) },
	{ 0x42564172, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x84bbb1dd, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x78f082b6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xe60e0d06, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf17927ec, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x5200f351, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xb8c2c64c, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7b9221c6, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x81a05a85, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3e4ad10c, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xcae1d21d, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xeb06bec1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x9ce95010, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3b3b00fa, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x3d0244d4, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x5635a60a, __VMLINUX_SYMBOL_STR(vmalloc_user) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xcadd034e, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x702a0495, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0xebf96c36, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x9c7660b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6df310a7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x864a2e35, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xb6a15626, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xad2a53fb, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x87d9f40f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x833f53fc, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v174FpA311d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v05E1p0501d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "2AF9530262467DFC5D0A049");
