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
"depends=lirc_dev";

MODULE_ALIAS("i2c:ir_tx_z8f0811_haup");
MODULE_ALIAS("i2c:ir_rx_z8f0811_haup");
MODULE_ALIAS("i2c:ir_tx_z8f0811_hdpvr");
MODULE_ALIAS("i2c:ir_rx_z8f0811_hdpvr");

MODULE_INFO(srcversion, "58DBE628C3CAD19A9E4EE43");
