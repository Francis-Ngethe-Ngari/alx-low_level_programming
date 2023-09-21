#include "lists.h"

void print_first(void) __attribute__ ((constructor));

/**
 * print_first - Function prints the
 * contents passed b4 main function
 * is called.
 *
 */

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
