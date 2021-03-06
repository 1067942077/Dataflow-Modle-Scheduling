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

MODULE_ALIAS("of:N*T*Cti,palmas-pmic");
MODULE_ALIAS("of:N*T*Cti,palmas-pmicC*");
MODULE_ALIAS("of:N*T*Cti,twl6035-pmic");
MODULE_ALIAS("of:N*T*Cti,twl6035-pmicC*");
MODULE_ALIAS("of:N*T*Cti,twl6036-pmic");
MODULE_ALIAS("of:N*T*Cti,twl6036-pmicC*");
MODULE_ALIAS("of:N*T*Cti,twl6037-pmic");
MODULE_ALIAS("of:N*T*Cti,twl6037-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps65913-pmic");
MODULE_ALIAS("of:N*T*Cti,tps65913-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps65914-pmic");
MODULE_ALIAS("of:N*T*Cti,tps65914-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps80036-pmic");
MODULE_ALIAS("of:N*T*Cti,tps80036-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps659038-pmic");
MODULE_ALIAS("of:N*T*Cti,tps659038-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps65917-pmic");
MODULE_ALIAS("of:N*T*Cti,tps65917-pmicC*");

MODULE_INFO(srcversion, "EF0C7D63A2F346FF133AEF7");
