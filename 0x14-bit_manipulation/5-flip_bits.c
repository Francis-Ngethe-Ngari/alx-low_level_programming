#include "main.h"

/**
 * flip_bits- function that returns the number
 * of bits you would need to flip to get from
 * one number to another.
 *
 * @n: unsigned long int which bits are to be compared.
 * @m: unsigned long int which bits are to be compared.
 *
 * Return: no of bits you need to flip to get from
 * one number to another.
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int product = n ^ m;
	unsigned int counter = 0;

	while (product > 0)
	{
		counter += product & 1;
		product >>= 1;
	}
	return (counter);
}
