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
"depends=comedi,comedi_pcmcia,comedi_8255,ni_tio,pcmcia";

MODULE_ALIAS("pcmcia:m010Bc010Df*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc010Cf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc02C4f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc075Ef*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc0245f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "AA40566EB57ECC75AE0D0C4");