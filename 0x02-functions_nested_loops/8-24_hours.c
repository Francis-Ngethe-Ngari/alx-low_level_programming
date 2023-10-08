#include "main.h"
/**
 * jack_bauer - function declared that prints through every minute
 * of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hr1, hr2,  min1, min2;

	for (hr1 = 0; hr1 <= 2; hr1++)
	{
		for (hr2 = 0; hr2 <= 9; hr2++)
		{
			if ((hr1 == 2) && (hr2 == 4))
			{
				break;
			}
			for (min1 = 0; min1 <= 5; min1++)
			{
				for (min2 = 0; min2 <= 9; min2++)
				{
					_putchar('0' + hr1);
					_putchar('0' + hr2);
					_putchar(':');
					_putchar('0' + min1);
					_putchar('0' + min2);
					_putchar('\n');
				}

			}
		}

	}
}
