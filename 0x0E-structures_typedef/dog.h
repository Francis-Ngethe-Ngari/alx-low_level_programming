#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - user-defined data type which allows to
 * combine data types of different kinds.
 *
 * @name: which is a pointer of type char which
 * will hold name of dog.
 * @age: which is floating pointer integer which
 * represents age of dog.
 * @owner: which is a pointer of type char which
 * represents name of owner.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of struct dog.
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
