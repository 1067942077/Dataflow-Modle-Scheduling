#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v077Dp0410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Dp04AAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05F3p0240d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "39B19FE9B5624B6351BECD5");