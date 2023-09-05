# include "main.h"

/**
 * str_concat - function concantenates two strings
 *
 * @s1: represents a pointer to the first string.
 * @s2: represents a pointer to the second string.
 *
 * description:if NULL is passed to function treat it
 * as an empty string.
 *
 * Return: pointer points to a newly allocated space
 * in memory where contents of s1 and followed by s2
 * the null character are stored.
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len;
	int s2_len;
	int full_len;
	char *str;

	if ((s1 == NULL) && (s2 == NULL))
	{
		char *empty_str;

		empty_str = malloc(1);
		if (empty_str != NULL)
		{
			empty_str[0] = '\0';
		}
		return (empty_str);
	}

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	full_len = s1_len + s2_len + 1;
	str = malloc(full_len * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	_strcpy(str, s1);
	_strcat(str, s2);
	return (str);
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
 * _strcpy - compare the characters of the two strings
 * in sequence until it finds a mismatch or until the
 * end of the strings is reached (that is, the null character '\0')
 *
 * @dest: denotes the first string to be compared.
 * @src: denotes the second string to be compared.
 *
 * Return: char type
 */

char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}

/**
 * _strcat - Appends two strings
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
