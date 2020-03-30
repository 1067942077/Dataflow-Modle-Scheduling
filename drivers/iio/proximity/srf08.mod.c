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
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("i2c:srf02");
MODULE_ALIAS("i2c:srf08");
MODULE_ALIAS("i2c:srf10");
MODULE_ALIAS("of:N*T*Cdevantech,srf02");
MODULE_ALIAS("of:N*T*Cdevantech,srf02C*");
MODULE_ALIAS("of:N*T*Cdevantech,srf08");
MODULE_ALIAS("of:N*T*Cdevantech,srf08C*");
MODULE_ALIAS("of:N*T*Cdevantech,srf10");
MODULE_ALIAS("of:N*T*Cdevantech,srf10C*");

MODULE_INFO(srcversion, "37883F536FA0BCF59A9DD9D");