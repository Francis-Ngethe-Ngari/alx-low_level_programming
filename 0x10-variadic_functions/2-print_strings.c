#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings and a separator i.e
 * a comma, if one of the strings is null, print nill.if separator is
 * null do not print it.
 *
 * @n: represents the strings passed as arguements to function
 * to be printed.
 * @separator: represents the comma which is printed between the
 * strings.
 *
 * Return: no return once function is called.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int itr;
	char *str;
	va_list var_args;

	va_start(var_args, n);

	for (itr = 0; itr < n; itr++)
	{
		str = va_arg(var_args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (itr < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(var_args);
	printf("\n");
}
