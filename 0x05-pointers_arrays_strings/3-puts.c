#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: parameter n is declared as a pointer of char
 * type which is to be passed to function
 *
 * Return: Always 0 (success)
 *
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (*str != '\0')
	{
		i++;
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
