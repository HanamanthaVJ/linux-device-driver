/*  
 *  sample.c - The simplest kernel module.
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */

static int __init sample_init(void)
{
	printk(KERN_INFO "welcome to sample program.\n");
	return 0;
}

static void __exit sample_exit(void)
{
	printk(KERN_INFO "Goodbye to sample program\n");
}

module_init(sample_init);
module_exit(sample_exit);

