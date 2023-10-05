#include "main.h"

/**
 * set_bit- function that sets the value
 * of a bit to '1'.
 *
 * @n: pointer to unsigned long int which its
 * bit are to be extracted.
 * @index: represents position of bit to be set
 * to 1.
 *
 * Return: '1' if its set or otherwise
 * return -1.
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	bitmask = 1UL << index;

	*n |= bitmask;

	return (*n);
}
