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
"depends=hts221,industrialio";

MODULE_ALIAS("i2c:hts221");
MODULE_ALIAS("of:N*T*Cst,hts221");
MODULE_ALIAS("of:N*T*Cst,hts221C*");
MODULE_ALIAS("acpi*:SMO9100:*");

MODULE_INFO(srcversion, "63029AA5EB6EA9CDFDB1EBA");
