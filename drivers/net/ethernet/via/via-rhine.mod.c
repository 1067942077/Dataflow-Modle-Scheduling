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
"depends=mii";

MODULE_ALIAS("of:N*T*Cvia,vt8500-rhine");
MODULE_ALIAS("of:N*T*Cvia,vt8500-rhineC*");
MODULE_ALIAS("pci:v00001106d00003043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003053sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3A31DFAE260DDC0DC8D7E03");
