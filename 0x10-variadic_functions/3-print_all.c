#include "variadic_functions.h"

/**
 * print_all - Function prints anything.
 * @format: represents list of arguements passed to
 * function.
 *
 * defination: constant variable, once declared cannot be
 * changed.
 * IF a string is NULL, print (nil).
 *
 * Return: no return.
 *
 */

void print_all(const char * const format, ...)
{
	va_list var_args;
	size_t itr1 = 0, itr2, itr3 = 0;
	char *str;
	const char no_arg[] = "cifs";

	va_start(var_args, format);
	while (format && format[itr1])
	{
		itr2 = 0;
		while (no_arg[itr2])
		{
			if (format[itr1] == no_arg[itr2] && itr3)
			{
				printf(", ");
				break;
			} itr2++;
		}
		switch (format[itr1])
		{
			case 'c':
				printf("%c", va_arg(var_args, int)), itr3 = 1;
				break;
			case 'i':
				printf("%d", va_arg(var_args, int)), itr3 = 1;
				break;
			case 'f':
				printf("%f", va_arg(var_args, double)), itr3 = 1;
				break;
			case 's':
				str = va_arg(var_args, char *), itr3 = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} itr1++;
	}
	printf("\n"), va_end(var_args);
}
