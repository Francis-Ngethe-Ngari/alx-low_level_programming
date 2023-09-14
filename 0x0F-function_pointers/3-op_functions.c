#include "3-calc.h"

/**
 * op_add - Function finds sum of values
 * passed to a and b.
 *
 * @a: 1st arguement passed to function.
 * @b: 2nd argument passed to function.
 *
 * Return: sum of a and b.
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function gets difference between values
 * passed to parameter a and b.
 *
 * @a: 1st argument passed to function.
 * @b: 2nd argument passed to function.
 *
 * Return: difference of a and b.
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function finds product of values
 * passed to a and b.
 *
 * @a: 1st arguement passed to function.
 * @b: 2nd argument passed to function.
 *
 * Return: product of a and b.
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function gets division of values
 * passed to parameter a and b.
 *
 * @a: 1st argument passed to function.
 * @b: 2nd argument passed to function.
 *
 * Return: division of a and b.
 *
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function gets remainder of
 * division of values passed to parameter
 * a and b.
 * @a: 1st argument passed to function.
 * @b: 2nd argument passed to function.
 *
 * Return: remainder of division of a and b.
 *
 */

int op_mod(int a, int b)
{
	return (a % b);
}
