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
"depends=intel-ishtp";

MODULE_ALIAS("pci:v00008086d000022D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D35sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DFCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A37Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A135sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002FCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "46152066705D59BE2EF53E8");
