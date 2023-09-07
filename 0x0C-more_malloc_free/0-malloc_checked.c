#include "main.h"

/**
 * malloc_checked - function that allocates
 * memory using malloc.
 *
 * @b: represent size of memory block in bytes.
 *
 * Return: void no return type
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
