#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @c: represents the variable character to which array is
 * assigned.
 * @size: represents the memory block or size of bytes to be
 * assigned its data-type unsigned int.
 *
 * Return: NULL if size is zero, returns a pointer to array or
 * NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int itr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	itr = 0;

	while (itr < size)
	{
		*(arr + itr) = c;
		itr++;
	}

	*(arr + itr) = '\0';
	return (arr);
}
