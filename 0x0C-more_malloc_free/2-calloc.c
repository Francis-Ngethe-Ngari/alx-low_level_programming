#include "main.h"

/**
 * _calloc - Function that allocates memory using malloc.
 *
 * @nmemb: representis no of elemements to specify
 * memory for.
 * @size: represents the size of each elements.
 *
 * description: The function is a user-defined calloc function
 * which is used to dynamically allocate and intialize memory
 * for an array.
 *
 * Return: pointer to allocated and zero initialized memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *ptr;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;

	nmemb = '\0';

	return (ptr);
}
