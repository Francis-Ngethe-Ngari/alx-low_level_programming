/* Declare Header Files */
#include <stdio.h>

/**
 * main - Function that executes to print all different combinations
 * of digits
 *
 * description: The two digits should be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int flag = 0;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i < j)
			{
				if (flag == 49)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i);
				putchar(j);
				flag = 49;
			}
		}
	}
	putchar('\n');

	return (0);
}
