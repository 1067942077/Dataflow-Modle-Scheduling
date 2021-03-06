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
"depends=pcmcia,com20020,arcnet";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa59991666pb95DFFFAFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF8991729pb69DFF0C7pc*pd*");

MODULE_INFO(srcversion, "600A4397ABFD74D6F75A439");
