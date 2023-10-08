#include "main.h"

/**
 * print_line - Function prints a line
 * depending on argument passed.
 *
 * @n: represents the no of time a char
 * should be printed.
 *
 * Return: no type.
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
