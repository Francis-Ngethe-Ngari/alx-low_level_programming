/* Declare Header Files */
#include "main.h"

/**
 * print_last_digit - function declared to find the last digit of unknown
 * number
 *
 * @num: parameter of type int to pass into print_last_digit
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int print_last_digit(int num)
{
	int x;

	x = num % 10;

	if (x < 0)
	{
		_putchar('0' - x);
		return (-x);
	}
	else
	{
		_putchar('0' + x);
		return (x);
	}
	_putchar('\n');
	return (x);
}


