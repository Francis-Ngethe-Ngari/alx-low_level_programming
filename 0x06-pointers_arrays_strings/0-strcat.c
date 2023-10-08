#include "main.h"

/**
 * *_strcat - Appends two strings
 *
 * @dest: pointer of char type declared
 * @src: pointer of char type declared
 *
 * Description: Appends the src string
 * to the dest string, overwriting the
 * terminating null byte (\0) at the
 * end of dest, and then adds a
 * terminating null byte
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);
}

/**
 * _strlen - Gets the length of a string
 *
 * @s: pointer declared of type char
 *
 * Return: the length of string
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
