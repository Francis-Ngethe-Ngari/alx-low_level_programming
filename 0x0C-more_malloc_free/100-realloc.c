#include "main.h"

/**
 * _realloc - Function that reallocates memory block using
 * malloc and free.
 *
 * @ptr: pointer to allocated old_size memory block.
 *
 * @old_size: represents the size of the allocated old memory
 * block.
 *
 * @new_size: represents the size of allocated new memory
 * block.
 *
 * Return: pointer to new allocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *latest_ptr;
	unsigned int cpy_siz;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	latest_ptr = malloc(new_size);

	if (latest_ptr == NULL)
		return (NULL);

	cpy_siz = (old_size < new_size) ? old_size : new_size;
	memcpy(latest_ptr, ptr, cpy_siz);

	free(ptr);

	return (latest_ptr);

}
