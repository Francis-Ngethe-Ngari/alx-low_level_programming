#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 *
 * @name: pointer param which represents name to
 * be printed.
 * @f: void function pointer.
 *
 * Return: nothing.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);

}
