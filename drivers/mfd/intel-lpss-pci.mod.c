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
"depends=intel-lpss";

MODULE_ALIAS("pci:v00008086d000002A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ABAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ABCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ABEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ABAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ABCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ABEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ABAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ABCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ABEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D29sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DFBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DE9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DEAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A127sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A128sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A12Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A166sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A32Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A32Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A37Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A369sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A36Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A36Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "624A57ED77382096EB34846");
