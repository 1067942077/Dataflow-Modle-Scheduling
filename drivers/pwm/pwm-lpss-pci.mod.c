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
"depends=pwm-lpss";

MODULE_ALIAS("pci:v00008086d00000AC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000011A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002289sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC8sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "85D675C3DFCB2D39F9A56EE");