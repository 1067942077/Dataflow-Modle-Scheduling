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

MODULE_ALIAS("i2c:fscpos");
MODULE_ALIAS("i2c:fscher");
MODULE_ALIAS("i2c:fscscy");
MODULE_ALIAS("i2c:fschrc");
MODULE_ALIAS("i2c:fschmd");
MODULE_ALIAS("i2c:fschds");
MODULE_ALIAS("i2c:fscsyl");

MODULE_INFO(srcversion, "59B43E09E1CF008A017F98D");
