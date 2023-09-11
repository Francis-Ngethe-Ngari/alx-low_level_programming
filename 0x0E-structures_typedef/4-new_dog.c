#include "dog.h"

/**
 * new_dog - Function to create a new dog.
 *
 * @name: pointer to the name param which will be
 * passed the name of the dog.
 * @age: Floating point integer representing age of
 * the dog.
 * @owner: Pointer to owner param which will take owner
 * details as arguements.
 *
 * Return: NULL if fuction fails or pointer to function.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *canine;

	if (!name || age < 0 || !owner)
		return (NULL);

	canine = malloc(sizeof(dog_t));

	if (canine == NULL)
		return (NULL);

	canine->name = malloc(sizeof(char) * (strlen(name) + 1));

	if ((*canine).name == NULL)
	{
		free(canine);
		return (NULL);
	}

	canine->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if ((*canine).owner == NULL)
	{
		free(canine->name);
		free(canine);
		return (NULL);

	}
	canine->name = strcpy(canine->name, name);
	canine->age = age;
	canine->owner = strcpy(canine->owner, owner);

	return (canine);
}
