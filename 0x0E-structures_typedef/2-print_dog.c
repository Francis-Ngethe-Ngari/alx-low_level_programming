#include "dog.h"

/**
 * print_dog - prints struct dog.
 *
 * @d: pointer to variable which initializes
 * struct dog.
 *
 * defination: if an element of d is NULL,
 * print (nil) instead of this element.
 * (if name is NULL, print Name: (nil)).
 * If d is NULL print nothing.
 *
 * Return: nothing.
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);

		printf("Age: %f\n", d->age);

		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}


}
