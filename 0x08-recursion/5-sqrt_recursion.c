#include "main.h"

/**
 * _sqrt_recursion - Function that returns the
 * natural squareroot of a number.
 *
 * @n: integer to calculate squareroot for.
 *
 * Return: -1 if integer doesnot have a squareroot
 * and squareroot if it has one.
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calc_sqrt(n, 0));
}

/**
 * calc_sqrt - returns squareroot.
 *
 * @num: integer to which squareroot is to be
 * calculated.
 * @itr: represents iterator, which hold integers.
 *
 * Return: squareroot or -1 if no squareroot is generated.
 *
 */

int calc_sqrt(int num, int itr)
{
	if (itr * itr > num)
		return (-1);

	if (itr * itr == num)
		return (itr);

	return (calc_sqrt(num, itr + 1));
}
