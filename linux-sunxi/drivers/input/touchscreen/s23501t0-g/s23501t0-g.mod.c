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
	{ 0x560877c1, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x56dbd6e6, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x9c2b04fb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc613540e, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x9974da96, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xbdc81160, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0x829a154a, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x1e7b8490, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0x31e45afb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xf57a63d2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x50b95842, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xaa39f25a, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4a6b7460, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa8c1a275, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb5d991f9, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xcce415ab, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x639bf9fa, __VMLINUX_SYMBOL_STR(vfs_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x91929fbb, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x873035ea, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xbd2b914f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x716aacdf, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x42129767, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x2358f3ca, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x130f1f4e, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0xdc8c8134, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x86cc1565, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x1f59cbb8, __VMLINUX_SYMBOL_STR(kobject_add) },
	{ 0xd102aa40, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf176e82, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0xfd375a9, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x10263a72, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xb49a36c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x265069ca, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xdb7e42f9, __VMLINUX_SYMBOL_STR(kobject_create) },
	{ 0xde26af42, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x3a9cb859, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xc892610b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x5192f20c, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x43573bda, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0xb62f5683, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xe849ac4c, __VMLINUX_SYMBOL_STR(kobject_get_path) },
	{ 0xd51eaf90, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa343bcdb, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xf73262d9, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x636933e6, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xa5f6bee6, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe226f3c3, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x2adec911, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x58bb4334, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xab15ab82, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xc279e594, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:msg2xxx");

MODULE_INFO(srcversion, "A5EA80386309E90A15B5D30");
