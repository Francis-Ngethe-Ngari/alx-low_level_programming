#include "main.h"

/**
 * get_bit- function to get the value of
 * a bit at a given index.
 *
 * @n: value passed to function in which a
 * bit will be extracted.
 * @index: represents position of the bit to
 * be extracted. (0 - based index)
 *
 * Return: '1' or '0'. if index is out of range
 * it returns '-1'.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return (n & (1 << index)) != 0;

}

