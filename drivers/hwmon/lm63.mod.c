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

MODULE_ALIAS("of:N*T*Cnational,lm63");
MODULE_ALIAS("of:N*T*Cnational,lm63C*");
MODULE_ALIAS("of:N*T*Cnational,lm64");
MODULE_ALIAS("of:N*T*Cnational,lm64C*");
MODULE_ALIAS("of:N*T*Cnational,lm96163");
MODULE_ALIAS("of:N*T*Cnational,lm96163C*");
MODULE_ALIAS("i2c:lm63");
MODULE_ALIAS("i2c:lm64");
MODULE_ALIAS("i2c:lm96163");

MODULE_INFO(srcversion, "51B784612AC22C0FCD2EFAF");
