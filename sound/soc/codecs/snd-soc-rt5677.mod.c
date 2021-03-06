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
"depends=snd-pcm,snd-soc-core,snd-soc-rl6231,snd-soc-rt5677-spi";

MODULE_ALIAS("i2c:rt5677");
MODULE_ALIAS("i2c:rt5676");
MODULE_ALIAS("of:N*T*Crealtek,rt5677");
MODULE_ALIAS("of:N*T*Crealtek,rt5677C*");
MODULE_ALIAS("acpi*:RT5677CE:*");

MODULE_INFO(srcversion, "5A6A0EAF4CAE5EDC9B7D84B");
