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

MODULE_ALIAS("pci:v00008086d00001513sv00002222sd00001111bc08sc80i00*");
MODULE_ALIAS("pci:v00008086d00001547sv00002222sd00001111bc08sc80i00*");
MODULE_ALIAS("pci:v00008086d0000156Asv*sd*bc08sc80i00*");
MODULE_ALIAS("pci:v00008086d0000156Csv*sd*bc08sc80i00*");
MODULE_ALIAS("pci:v00008086d00001575sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001577sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015EBsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0A661AE2C516479F13503FB");
