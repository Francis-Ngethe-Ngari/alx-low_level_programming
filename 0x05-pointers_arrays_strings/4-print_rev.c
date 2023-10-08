#include "main.h"

/**
 * print_rev - Function prints a string in
 * reverse, followed by a new line.
 *
 * @s: pointer to string to be printed in
 * reverse.
 *
 * Return: nothing.
 *
 */

void print_rev(char *s)
{
	int len, trav;

	if (s == NULL)
		return;
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (trav = len - 1; trav >= 0; trav--)
	{
		_putchar(s[trav]);
	}
	_putchar('\n');
}
