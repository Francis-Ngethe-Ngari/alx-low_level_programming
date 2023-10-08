#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes
 * (\0) are not compared
 *
 * @haystack: This parameter is a pointer which represents string to
 * which substring will be searched.
 * @needle: This parameter is a pointer which contains chars to which will
 * use to match
 *
 * Return: pointer to the first occurrence of the matched string in
 * the given string. It is used to return substring from first match
 * till the last character
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *flow = needle;

		/**
		 * If first char of substring match,
		 * check the whole string
		 */

		if (*haystack && *flow && *haystack == *flow)
		{
			haystack++;
			flow++;
		}

		/**
		 * If complete sub string match,
		 * return the starting Address
		 *
		 */

		if (!*flow)
		{
			return (start);
		}

		/* Increament the main string */
		haystack = start + 1;
	}
	return (NULL);
}
