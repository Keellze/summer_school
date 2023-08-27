#include <linux/module.h>   /* Needed by all modules */
#include <linux/kernel.h>   /* Needed for KERN_INFO */
#include <linux/init.h>     /* Needed for the macros */



static int __init hello__init(void)
{
    printk(KERN_INFO "Hello, world\n");
    return 0;
}

static void __exit hello__exit(void)
{
    printk(KERN_INFO "Goodbye, world\n");
}

module_init(hello__init);
module_exit(hello__exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kirill");
MODULE_DESCRIPTION("A Simple Hello World module");