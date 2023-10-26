#include "main.h"

/**
 * get_endianness- function that checks the endianness.
 *
 * Description: Endianess is a term that describes the
 * order in which a sequence of btyes are strored in a
 * computer memory. Endianess can either be big or small,
 * with the adjectives reffering to which value is stored
 * first.
 *
 * Return: 0 if it's big endian and 1 if its small.
 *
 */

int get_endianness(void)
{
	unsigned int itr = 1;
	char *c = (char *) &itr;

	return ((int) *c);
}
