#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string
 * followed in reverse.
 *
 * @s: parameter which points to string to be
 * printed.
 *
 * Return: Always 0 (succcess).
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
