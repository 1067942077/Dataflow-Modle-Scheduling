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
"depends=matroxfb_Ti3026,matroxfb_DAC1064,matroxfb_g450,matroxfb_misc,matroxfb_accel";

MODULE_ALIAS("pci:v0000102Bd00000519sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd0000051Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd0000051Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd0000051Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00002527sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "32D79B7A76CA397CCF8E989");
