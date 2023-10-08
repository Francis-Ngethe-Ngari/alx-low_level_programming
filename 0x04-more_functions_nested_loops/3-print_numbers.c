/* Declare Header Files */
#include "main.h"

/**
 * print_numbers - function declared to print numbers for 0 to 9
 *
 * Return: no return type because no parameters are declared
 *
 */

void print_numbers(void)
{
	int num;

	num = 0;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
