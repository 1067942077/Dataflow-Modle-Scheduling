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
"depends=dw_dmac_core";

MODULE_ALIAS("pci:v00008086d00000936sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE4sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C58E3A8CFE533B5FF615B9F");
