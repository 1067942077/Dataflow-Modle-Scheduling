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

MODULE_INFO(staging, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000018CAd00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018CAd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018CAd00000040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018CAd00000042sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E1F81DEF01E9666EA9D4725");
