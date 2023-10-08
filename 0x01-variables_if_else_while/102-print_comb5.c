/* Declare Header Files */
#include <stdio.h>

/**
 * main - Function that executes to print all possible combination
 * of two two-digit numbers
 *
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits.
 * 1 should be printed as 01
 * The combination of numbers must be separated by
 * comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the
 * numbers 0 and 1
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int m;
	int flag = 48;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (m = 49; m <= 57; m++)
				{
					if ((i <= j) && (j <= k) && (k <=  m) && (m >= i))
					{
						if ((i >= j) && (j >= k) && (k >= m) && (m <= i))
						{
							if (flag == 49)
							{
								putchar(',');
								putchar(' ');
							}
							putchar(i);
							putchar(j);
							putchar(' ');
							putchar(k);
							putchar(m);
							flag = 49;
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

