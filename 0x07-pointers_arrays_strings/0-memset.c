#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 *
 * @s: parameter is a pointer of memory location where memory will be set
 * @b: parameter value that is to be copied to the memory block
 * @n: paremeter is the number of bytes in the memory block which is set
 *
 * Return: the first address of memory block where it starts to set its value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
