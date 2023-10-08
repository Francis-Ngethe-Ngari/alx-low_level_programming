/* Declare Header Files */
#include <stdio.h>

/**
 * main - Function executes to print all possible combinations of
 * of 3 digits
 *
 * description: Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
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
	int flag = 48;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (i < j && j < k && k > i)
				{
					if (flag == 49)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(i);
					putchar(j);
					putchar(k);
					flag = 49;
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
