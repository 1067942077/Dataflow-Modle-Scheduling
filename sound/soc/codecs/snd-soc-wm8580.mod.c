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
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:wm8580");
MODULE_ALIAS("i2c:wm8581");
MODULE_ALIAS("of:N*T*Cwlf,wm8580");
MODULE_ALIAS("of:N*T*Cwlf,wm8580C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8581");
MODULE_ALIAS("of:N*T*Cwlf,wm8581C*");

MODULE_INFO(srcversion, "3A7B8485405E49157E75326");
