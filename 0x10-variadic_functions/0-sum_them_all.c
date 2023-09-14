#include "variadic_functions.h"

/**
 * sum_them_all - Function that sums up all arguements
 * passed to it. Returns 0 if interger is equals to 0.
 *
 * @n: parameter of unsigned int which represents the fixed
 * value passed as an arguements to functions.
 *
 * Return: addition of arguements passed to function.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int itr;
	int addition = 0;
	va_list var_args;

	va_start(var_args, n);

	if (n == 0)
	{
		return (0);
	}

	for (itr = 0; itr < n; itr++)
		addition += va_arg(var_args, const unsigned int);

	va_end(var_args);

	return (addition);

}
