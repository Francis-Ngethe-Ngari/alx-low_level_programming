#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Function that searches for an integer.
 *
 * @array: pointer to actual array.
 * @size:number of elements in an array.
 * @cmp:pointer to function to be used.
 *
 * defination: if no element matches return -1.
 * if size <= 0, return -1.
 *
 * Return: index of the first elements for which cmp
 * function does not return 0.
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int itr;
	bool check;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (itr = 0; itr < size; itr++)
		{
			check = cmp(array[itr]);

			if (check == true)
				return (itr);
		}
	}
	return (-1);
}
