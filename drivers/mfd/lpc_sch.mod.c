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

MODULE_ALIAS("pci:v00008086d00008119sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008186sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000095Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BA50C89A4589DD4325BD7CF");
