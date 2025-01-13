#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vaishnav Sabari Girish");
MODULE_DESCRIPTION("Prints 'Hello World'");

static int hello_world_module_init (void) {
  printk("Hello World !!!! (Vaishnav Sabari Girish)\n");
  return 0;
}

static void hello_world_module_exit (void) {
  printk("Bye Bye\n");
}

module_init(hello_world_module_init);
module_exit(hello_world_module_exit);


