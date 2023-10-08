#include "main.h"

/**
 * print_diagonal - function prints diagonal
 * line to terminal.
 *
 * @n: represents the number which is passed
 * as argument which determines the no diagonals
 * which will be printed.
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int itr;

	for (itr = 0; itr < n; itr++)
	{
		if (itr <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
