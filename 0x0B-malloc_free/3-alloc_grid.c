#include "main.h"

/**
 * alloc_grid - returns a pointer to a two-dimention
 * array of integers.
 *
 * @width: represents width of 2-dimentional array.
 * @height: represents height of the 2-dimentional array.
 *
 * Return: pointer to the 2-dimentional array and NULL on
 * failure to create 2-dimentional array of integers.
 *
 * itr - stands for variable declared for iteration
 * through loops.
 *
 * ptr points to an array of integer pointers.
 */

int **alloc_grid(int width, int height)
{
	int **ptr;

	int itr1, itr2;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (itr1 = 0; itr1 < height; itr1++)
	{
		ptr[itr1] = (int *)malloc(width * sizeof(int));

		if (ptr[itr1] == NULL)
		{
			free(ptr);
			for (itr2 = 0; itr2 <= itr1; itr2++)
				free(ptr[itr2]);
			return (NULL);
		}
	}
	for (itr1 = 0; itr1 < height; itr1++)
	{
		for (itr2 = 0; itr2 < width; itr2++)
		{
			ptr[itr1][itr2] = 0;
		}
	}
	return (ptr);
}
