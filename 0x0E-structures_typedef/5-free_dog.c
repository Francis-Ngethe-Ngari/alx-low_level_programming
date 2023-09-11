#include "dog.h"

/**
 * free_dog - Function that frees up memory
 * form struct dog.
 *
 * @d: pointer to struct dog.
 *
 * Return: nothing.
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
