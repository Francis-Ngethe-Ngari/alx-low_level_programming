/* Declare Header Files */
#include "main.h"

/**
 * print_to_98 - function declared to print natural numbers until 98
 *
 * @n: parameter is of type int, which is declared in the function
 *
 * Return: Always 0 (success); No return type required
 */

/* Declaring function print_alphabet */
void print_to_98(int n)
{
	int i;
	int j;
	
	for (i = 0; i <= 57; i++)
	{
		for (j = 0; j <= 56; j++)
		{
			if ((n == 57) && (n == 56))
				putchar (n);
			
		}
	}


}
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
