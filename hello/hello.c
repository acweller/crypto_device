// Definindo __KERNEL__ e MODULE nos permite acessar o código no nível do kernel, geralmente não disponível para programas userspace.
#undef __KERNEL__
#define __KERNEL__
#undef MODULE
#define MODULE

// Linux Kernel/LKM headers: module.h é necessário para todos os módulos e kernel.h é necessário para KERN_INFO.
//#include <linux/config.h>	// incluído para todos os módulos do kernel
#include <linux/module.h>	// incluído para todos os módulos do kernel
#include <linux/kernel.h>	// incluído para KERN_INFO
#include <linux/init.h>		// incluído para __init e __exit macros

static int __init hello_init(void)
{
    printk(KERN_ALERT "Inicio do modulo.\n");
    return 0;	// Retorno diferente de zero significa que o módulo não pôde ser carregado.
}

static void __exit hello_cleanup(void)
{
    printk(KERN_ALERT "Fim do modulo.\n");
}

module_init(hello_init);
module_exit(hello_cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Anderson");
MODULE_DESCRIPTION("Modulo Exemplo");
