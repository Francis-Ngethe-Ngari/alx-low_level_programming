#include "main.h"

/**
 * _strlen_recursion - Function that gets the length
 * of a string
 *
 * @s: rep string variable to whose length is suppossed
 * to be found.
 *
 * Return: integral length of the string passed.
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (*s);
}

