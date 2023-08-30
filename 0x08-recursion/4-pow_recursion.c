#include "main.h"

/**
 * _pow_recursion - Function that returns the value
 * of x raised to power of y.
 *
 * @x: int parameter declared in the function.
 *
 * @y: int parameter declared in the function.
 *
 * Return: x raised to power y when y is greator
 * than 0 and -1 when y is lower than 0, when y is
 * equal to zero returns 0
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

	return (x);
}
