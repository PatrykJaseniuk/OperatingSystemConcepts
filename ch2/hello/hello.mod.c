#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa4b86400, "module_layout" },
	{ 0xa3ee9e12, "remove_proc_entry" },
	{ 0xc5850110, "printk" },
	{ 0xdb59a12d, "proc_create" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x26948d96, "copy_user_enhanced_fast_string" },
	{ 0xafb8c6ff, "copy_user_generic_string" },
	{ 0x72a98fdb, "copy_user_generic_unrolled" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D081ABF7CA283ED6E7BA3B1");
