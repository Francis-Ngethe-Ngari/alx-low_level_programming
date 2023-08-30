#include "main.h"

/**
 * factorial - Function that gets the multiplication
 * of all positive integers n and any integer less than
 * 0 returns - 1
 *
 * @n: rep the integer passed to function whose
 * factorial is calculated.
 *
 * Return: multiplication value of positive integers and for
 * negative returns -1
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (n);
}
