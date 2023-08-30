#include "main.h"

/**
 * wildcmp - Function compares two strings, check
 * if they are identical or not.
 *
 * @s1: pointer to string one to be compared.
 * @s2: pointer to string two to be compared.
 *
 * Return: returns 1 if strings are considered
 * to be identical, otherwise 0.
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
