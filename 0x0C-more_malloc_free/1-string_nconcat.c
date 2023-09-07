# include "main.h"

/**
 * string_nconcat - Appends the string pointed
 * by src to the end of string pointed by dest
 * up to n characters.
 *
 * @s1: pointer to dest array, could contain a c
 * string and should be big enough to accomodate
 * concatenated resulting string which includes the
 * additional null-characters.
 * @s2: string to be appended.
 * @n: represents the maximum no of characters to be
 * appended.
 *
 * description:if NULL is passed to function treat it
 * as an empty string.
 *
 * Return: pointer points to a newly allocated space
 * in memory where contents of s1 and followed by the
 * first n bytes of s2 and null terminated.
 * the null character are stored.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int len;
	unsigned int i;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = 0;
	while (s1[s1_len] != '\0')
		s1_len++;

	s2_len = 0;
	while (s2[s2_len] != '\0')
		s2_len++;

	if (n > s2_len)
		n = s2_len;

	len = (s1_len + n + 1);
	str = malloc(len);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		str[i] = s1[i];

	for (i = 0; i < n; i++)
		str[s1_len + i] = s2[i];

	str[s1_len + i] = '\0';
	return (str);
}
