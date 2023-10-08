#include "main.h"
/**
 * times_table - function declared that prints the 9 times table,
 * starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int w, x, z;

	for (w = 0; w <= 9; w++)
	{
		_putchar(48);
		for (x = 1; x <= 9; x++)
		{
			z = w * x;
			_putchar(44);
			_putchar(32);
			if (z <= 9)
			{
				_putchar(32);
				_putchar(z + 48);
			}
			else
			{
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
