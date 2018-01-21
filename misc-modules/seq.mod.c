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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2b22e0c3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9c2afe65, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x79bc9e36, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9d05da80, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xce814a29, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x736fc972, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xb153f6c5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2b056eed, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x5905dbd3, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "73990FBCC44E841F1620626");
