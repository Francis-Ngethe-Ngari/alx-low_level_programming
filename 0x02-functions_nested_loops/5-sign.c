/* Declare Header Files */
#include "main.h"

/**
 * print_sign - function declared to print sign of a number, either positve
 * or negative
 *
 * @n: parameter of type int to pass into print_sign
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		return (n);
	}
}
