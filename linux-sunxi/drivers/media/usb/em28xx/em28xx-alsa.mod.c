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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x659ca7d9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x9efdcb5f, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x384614dc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x66dbce7f, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x88c77a6b, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4e5b07a5, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x4968544c, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x56d212f5, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x8e8cdce9, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xde1ef487, __VMLINUX_SYMBOL_STR(em28xx_read_ac97) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x77ae495d, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0x8a2d77ef, __VMLINUX_SYMBOL_STR(em28xx_write_ac97) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x979b605, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xcae1d21d, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x77eb2093, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfa7a5b3c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x858f12f1, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x7fe83ed8, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x5a6c5074, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x3c52a7e0, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xabf55436, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0xb1acc78c, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x81003982, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x3788a1c0, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x9e7a3835, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd7767f91, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28cdaf2b, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x7d103015, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x188cb98b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x8729a09d, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x35e2b381, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0x6df310a7, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x87d9f40f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "CEE40D4D8E2D03A88AC0445");
