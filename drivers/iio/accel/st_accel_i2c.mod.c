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
"depends=st_sensors_i2c,st_accel,industrialio";

MODULE_ALIAS("i2c:lsm303dlh_accel");
MODULE_ALIAS("i2c:lsm303dlhc_accel");
MODULE_ALIAS("i2c:lis3dh");
MODULE_ALIAS("i2c:lsm330d_accel");
MODULE_ALIAS("i2c:lsm330dl_accel");
MODULE_ALIAS("i2c:lsm330dlc_accel");
MODULE_ALIAS("i2c:lis331dlh");
MODULE_ALIAS("i2c:lsm303dl_accel");
MODULE_ALIAS("i2c:lsm303dlm_accel");
MODULE_ALIAS("i2c:lsm330_accel");
MODULE_ALIAS("i2c:lsm303agr_accel");
MODULE_ALIAS("i2c:lis2dh12_accel");
MODULE_ALIAS("i2c:lis3l02dq");
MODULE_ALIAS("i2c:lng2dm");
MODULE_ALIAS("i2c:h3lis331dl_accel");
MODULE_ALIAS("i2c:lis331dl_accel");
MODULE_ALIAS("i2c:lis3lv02dl_accel");
MODULE_ALIAS("i2c:lis2dw12");
MODULE_ALIAS("acpi*:SMO8A90:*");

MODULE_INFO(srcversion, "0958EE58D2498B9E4DBB8C2");
