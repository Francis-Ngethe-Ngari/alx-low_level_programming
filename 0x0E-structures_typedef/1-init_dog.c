#include "dog.h"

/**
 * init_dog - Function to initialize variable of
 * struct dog.
 *
 * @d: pointer to struct dog.
 * @name: pointer to element name of struct dog.
 * @age: floating point integer element age.
 * @owner: pointer to element owner.
 *
 * Return: nothing.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

}
