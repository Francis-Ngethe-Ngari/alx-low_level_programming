#include "main.h"

/**
 * binary_to_uint- function converts a binary
 * number to unsigned int.
 *
 * @b: pointer to constant char array(string).
 *
 * Return: unsigned integer as ouput or
 * 0 if input 'b' is not '0' or '1'.
 * 'b' is NULL.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u_val = 0;
	int itr = 0;

	if (b == NULL)
		return (0);

	while (b[itr] == '0' || b[itr] == '1')
	{
		u_val <<= 1;
		u_val += b[itr] - '0';
		itr++;
	}

	if (b[itr] != '\0')
	{
		return (0);
	}
	return (u_val);
}
