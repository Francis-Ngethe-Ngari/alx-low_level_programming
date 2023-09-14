#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers passed to it, adding
 * a separator between the integers, if null is passed the function
 * doesn't print anything.
 *
 * @separator: parameter which represents separator to be printed
 * between the numbers passed to function.
 * @n: represents integers passed to function.
 *
 * Return: nothing.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int itr;
	unsigned int num;
	va_list var_args;

	va_start(var_args, n);

	for (itr = 0; itr < n; itr++)
	{
		num = va_arg(var_args, unsigned int);
		printf("%d", num);

		if (itr < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(var_args);
	printf("\n");
}

