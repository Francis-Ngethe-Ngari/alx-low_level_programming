#include "main.h"

/**
 * _strpbrk- function that searches a string for any of a set of bytes.
 *
 * @s: This parameter is a pointer which represents string to
 * be scanned.
 * @accept: This parameter is a pointer which contains chars to
 * be matched
 *
 * Return: returns a pointer to character in s that matches one of char
 * in accept
 */

char *_strpbrk(char *s, char *accept)
{

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
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
