/* Declare Header Files */
#include "main.h"

/**
 * print_most_numbers - function declared to print numbers for 0 to 9
 * and exclude 2 and 4
 *
 * Return: no return type because no parameters are declared
 *
 */

void print_most_numbers(void)
{
	int num;

	num = 0;

	for (num = 0; num <= 9; num++)
	{
		if ((num != 2) && (num != 4))
		{
			_putchar('0' + num);
		}
	}
	_putchar('\n');
}
