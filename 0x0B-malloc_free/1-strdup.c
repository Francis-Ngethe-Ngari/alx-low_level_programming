#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate to original string.
 *
 * @str: parameter declared in function which represents
 * the original string.
 *
 * description: _strdup function does two things:
 *
 * Allocates space for a new string, setting the same size as original
 * string.
 * Copies the original string into a new allocated space, inluding the
 * null character.
 *
 * Return: pointer to duplicate string or Null to represent
 * insufficient memory allocation
 *
 */

char *_strdup(char *str)
{
	size_t original_len;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	original_len = _strlen(str) + 1;
	duplicate = malloc(original_len * sizeof(char));

	if (duplicate != NULL)
	{
		_memcpy(duplicate, str, original_len);
	}
	return (duplicate);
}

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

/**
 * *_memcpy - function that copies memory area from src
 * and copies to dest.
 *
 * @dest: This parameter is a pointer to the destination area
 * where data is to be copied.
 * @src: This parameter is a pointer to src area where data is to
 * be copied from.
 * @n: This parameter is the no of bytes to be copied.
 *
 * Return: address of destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
