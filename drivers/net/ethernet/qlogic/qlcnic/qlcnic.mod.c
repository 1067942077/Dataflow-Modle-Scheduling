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

MODULE_ALIAS("pci:v00001077d00008020sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00001077d00008030sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00001077d00008430sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00001077d00008830sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00001077d00008C30sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00001077d00008040sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00001077d00008440sv*sd*bc02sc00i00*");

MODULE_INFO(srcversion, "410A5B7E3202FC88DE280B8");
