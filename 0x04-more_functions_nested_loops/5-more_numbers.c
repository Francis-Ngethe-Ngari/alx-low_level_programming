#include "main.h"

/**
 * most_numbers - function declared to print 10 times
 * the numbers 0 to 14.
 *
 * Return: void.
 *
 */

void more_numbers(void)
{
	int outer_lp;
	int inner_lp;
	char num[3];

	for (outer_lp = 0; outer_lp <= 9; outer_lp++)
	{
		int index;
		index = 0;

		for (inner_lp = 0; inner_lp <= 14; inner_lp++)
		{
			if (inner_lp < 10)
			{	
				 _putchar(inner_lp + '0');
			}
			else
			{
				_putchar('1');
				_putchar(inner_lp - 10 + '0');
			}

		}
		_putchar('\n');
	}
}
