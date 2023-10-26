#include "main.h"

/**
 * print_binary- function that prints binary
 * representation of a number.
 *
 * @n:unsigned long int to be converted to
 * binary representation.
 *
 * Description: track_zeros is a flag to check
 * whether we hav encountered any '1' yet, if
 * we encounter a '1' we reset this flag and after
 * that we print the subsequent number of zero's.
 *
 * Return: Nothing.
 *
 */

void print_binary(unsigned long int n)
{
	int siz_bits = sizeof(unsigned long int) * 8;
	int itr = 0;
	int track_zeros = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (itr = siz_bits - 1; itr >= 0; itr--)
	{
		unsigned long int bitmask = 1UL << itr;

		if (n & bitmask)
		{
			_putchar('1');
			track_zeros = 0;

		}

		else if (!track_zeros)
			_putchar('0');
	}
}
