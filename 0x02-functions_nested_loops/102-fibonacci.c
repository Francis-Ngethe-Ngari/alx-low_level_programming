/* Declare Header Files */
#include "main.h"

/**
 * print_fibonacci - Executes statements in the body which generate fibonnanci
 * series up to 50 terms
 *
 * @num: parameter of type int declared in the function
 * Return: Always 0 (success)
 */

void print_fibonacci(int num)
{
	int i;
	int num1 = 1;
	int num2 = 2;
	int nterm = num1 + num2;

	if (num < 1)
	{
		printf("Invalid no of n terms \n");
	}

	for (i = 3; i <= num; i++)
	{
		if (i > 5)
		{
			num1 = num2;
			num2 = nterm;
			nterm = num1 + num2;
			printf("%d, ", nterm);
		}
		if (i == 3)
		{
			printf("%d, ", num1);
		}
		if (i == 5)
		{
			printf("%d, ", num2);
		}
		printf("\n");
	}
}

/**
 * main - runs the print_fibonacci once its called
 *
 * Return: Always 0 because return type is void
 */
int main(void)
{
	int num = 50;

	print_fibonacci(num);

	return (0);
}

