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

MODULE_ALIAS("mdio:0000001110100001101101000100????");
MODULE_ALIAS("mdio:0000001110100001101101000110????");
MODULE_ALIAS("mdio:0000001110100001101101001010????");
MODULE_ALIAS("mdio:0000001110100001101101001101????");
MODULE_ALIAS("mdio:0000001110100001101101001110????");
MODULE_ALIAS("mdio:0000001110100001101101001011????");

MODULE_INFO(srcversion, "8554F7363E5CBCDD59B9D58");
