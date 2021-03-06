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
"depends=snd-firewire-lib,firewire-core,snd-pcm,snd,snd-rawmidi,snd-hwdep";

MODULE_ALIAS("ieee1394:ven0000A07Emo00000001sp*ver*");
MODULE_ALIAS("ieee1394:ven0000A07Emo00000002sp*ver*");

MODULE_INFO(srcversion, "26D891CC109828EC8E9A91F");
