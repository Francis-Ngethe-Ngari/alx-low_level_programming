#include "main.h"

/**
 * _strspn- function that gets lenght of a prefix substring
 *
 * @s: This parameter is a pointer which represents string to
 * be scanned.
 * @accept: This parameter is a pointer which contains chars to
 * be matched
 *
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return (len);
	}
	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}

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
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
}
