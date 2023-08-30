#include "main.h"

/**
 * _puts_recursion - Function that prints a string
 * followed by a new line.
 *
 * @s: parameter which points to string to be
 * printed.
 *
 * Return: Always 0 (succcess).
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{	_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
