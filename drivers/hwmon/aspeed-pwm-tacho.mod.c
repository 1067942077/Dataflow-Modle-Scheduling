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

MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tachoC*");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tachoC*");

MODULE_INFO(srcversion, "59ECBBC5A887C4D8A448434");
