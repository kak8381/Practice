#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/kallsyms.h>
#include <linux/unistd.h>


MODULE_LICESNSE("GPL");
MODULE_AUTHOR("LightningMcQueen");
MODULE_DESCRIPTION("Silly little rootkit");
MODULE_VERSION("0.0.1");

unsigned long __sys_call_table - NULL;

static int __init mod_init(void)
{
    printk(KERN_INFO "ka_chow: init\n");
    __sys_call_table = (unsigned long)kallsyms_lookup_name("__sys_call_table");
    return 0;
}

static void _exit mod_exit(void)
{
    printk(KERN_INFO "ka_chow: exit\n");
}
