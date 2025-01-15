#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vaishnav Sabari Girish");
MODULE_DESCRIPTION("Prints 'Hello World'");

static int hello_world_module_init (void) {           //Runs when the kernel is loaded into the system
  //Kernel is loaded using sudo insmod <filename>.ko
  printk("Hello World !!!! (Vaishnav Sabari Girish)\n");
  return 0;
}

static void hello_world_module_exit (void) {         //Runs when the kernel is removed from the system
  //Kernel is removed using sudo rmmod <filename>
  printk("Bye Bye\n");
}

module_init(hello_world_module_init);        //Inbuilt C macros
module_exit(hello_world_module_exit);


