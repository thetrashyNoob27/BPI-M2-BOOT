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
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x8e04c405, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x4a19215c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc613540e, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xe60f3997, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0x5b19634d, __VMLINUX_SYMBOL_STR(div_s64_rem) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcbee6439, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xd1a5aaf8, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa621a504, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x86178cae, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe0875eb1, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x5fdb1e1, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x64507800, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4578f528, __VMLINUX_SYMBOL_STR(__kfifo_to_user) },
	{ 0x81a05a85, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x29e1b020, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xa5c3e46d, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5c5cd832, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xc3b56021, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x8f4638be, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0xb9450cd1, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x71107c01, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x10263a72, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xdb2f022b, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0x4a51f8cd, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfce88966, __VMLINUX_SYMBOL_STR(anon_inode_getfd) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc491793, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xe8d47d8a, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xaa4003b4, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcc52fcfa, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x6b72f10a, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1c309271, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6eb22c78, __VMLINUX_SYMBOL_STR(of_property_match_string) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x8e659150, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FCF5388BE8662A2F03671A1");
