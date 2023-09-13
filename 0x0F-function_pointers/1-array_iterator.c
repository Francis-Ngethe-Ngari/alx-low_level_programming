#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: array to iterate.
 * @size: represents size of an array.
 * @action: pointer to a function pointer.
 *
 * defination: itr is a variable declared to be used
 * to iterate through the array.
 *
 * Return: nothing.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t itr;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (itr = 0; itr < size; itr++)
			action(array[itr]);
	}
}
