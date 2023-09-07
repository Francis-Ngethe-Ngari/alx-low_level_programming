#include "main.h"

/**
 * array_range - Function creates an array of
 * integers then sorts them from min to max
 * including all values from min to max.
 *
 * @min: rep integers which are smaller
 * when compared to max.
 * @max: rep integers larger than min when
 * compared.
 *
 * description: Function takes two params min
 * and max which there difference is calculated
 * and passed to malloc to allocate memory for
 * the array.
 * If malloc fails to allocate memory it returns
 * NULL.
 * IF it allocates memory it proceeds to loop where
 * params min and max are compared to give a result of
 * integers arranged in ascending order.
 *
 * Return: pointer to array.
 */

int *array_range(int min, int max)
{
	int i, size, *array;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
