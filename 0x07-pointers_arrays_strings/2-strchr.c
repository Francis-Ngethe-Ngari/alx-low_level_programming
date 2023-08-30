#include "main.h"

/**
 * _strchr- function that checks the first occurrence
 * of characer c in a string
 *
 * @s: This parameter is a pointer to which c string
 *  is pointed.
 * @c: This parameter is the character being searched for.
 *
 * Return: a pointer of the first occurence of char c or
 * NULL if char is not found.
 */

char *_strchr(char *s, char c)
{
	while (s != NULL)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
}
