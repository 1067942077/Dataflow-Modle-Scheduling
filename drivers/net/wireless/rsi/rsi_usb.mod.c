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
"depends=rsi_91x";

MODULE_ALIAS("usb:v0303p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Bp0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Bp0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Bp9330d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1618p9113d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E24D22037C483EE658DAB81");
