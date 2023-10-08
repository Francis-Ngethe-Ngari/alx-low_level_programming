#include "main.h"

/**
 * print_array - function that prints elements of an array
 *
 * @a: parameter n is declared as a pointer of char
 * type which is to be passed to function
 *
 * @n: parameter n is declared as a variable of type int
 * which will take an arguement of int type was function
 * is called
 *
 * Return: int type return value
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (*a != "/0")
		{
			printf(",");
		}
	}
	printf("\n");
}

