#include "main.h"

/**
 * rev_string - Function that reverses a string
 *
 * @s: pointer to character array taken as an arg
 * to the function.
 *
 * Return: Nothing.
 *
 */

void rev_string(char *s)
{
	int len, trav, temp;

	if (s == NULL)
		return;

	len = 0;

	while (s[len] != '\0')
		len++;

	for (trav = len - 1; trav >= len / 2; --trav)
	{
		temp = s[trav];
		s[trav] = s[len - 1 - trav];
		s[len - 1 - trav] = temp;
	}
}

