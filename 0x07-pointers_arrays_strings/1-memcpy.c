#include "main.h"

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
