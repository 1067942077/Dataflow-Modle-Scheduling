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

MODULE_ALIAS("acpi*:GSL1680:*");
MODULE_ALIAS("acpi*:GSL1688:*");
MODULE_ALIAS("acpi*:GSL3670:*");
MODULE_ALIAS("acpi*:GSL3675:*");
MODULE_ALIAS("acpi*:GSL3692:*");
MODULE_ALIAS("acpi*:MSSL1680:*");
MODULE_ALIAS("acpi*:MSSL0001:*");
MODULE_ALIAS("acpi*:MSSL0002:*");
MODULE_ALIAS("acpi*:MSSL0017:*");
MODULE_ALIAS("i2c:gsl1680");
MODULE_ALIAS("i2c:gsl1688");
MODULE_ALIAS("i2c:gsl3670");
MODULE_ALIAS("i2c:gsl3675");
MODULE_ALIAS("i2c:gsl3692");
MODULE_ALIAS("i2c:mssl1680");

MODULE_INFO(srcversion, "0BB7FCD5F5227A7E0B0B1D3");
