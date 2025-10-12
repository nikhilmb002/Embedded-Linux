#include <linux/init.h>	     // Macros for module init/exit 
#include <linux/module.h>    // Core header for loading LKMs
#include <linux/kernel.h>    // Kernel info macros 

MODULE_LICENSE("GPL");
MODULE_AUTHOR("NIKHIL");
MODULE_DESCRIPTION("A simple hello world module\n");

static int __init hello_init(void) {

	printk(KERN_INFO "Hello world! Module loaded...\n");
	return 0; // success
}

static void __exit hello_exit(void) {

	printk(KERN_INFO "Moduled unloaded\n");
}

module_init(hello_init);
module_exit(hello_exit);
