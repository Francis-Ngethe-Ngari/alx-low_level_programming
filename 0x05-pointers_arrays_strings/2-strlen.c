#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that return the length of a string
 *
 * @s: parameter n is declared as a pointer of char
 * type which is to be passed to function
 *
 * Return: a return type of type int is required
 *
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
