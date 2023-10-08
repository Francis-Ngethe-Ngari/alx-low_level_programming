/* Declare Header Files */
#include "main.h"

/**
 * print_alphabet_x10 - function declared to write output of _putchar 10 times
 *
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

/* Declaring function print_alphabet */
void print_alphabet_x10(void)
{
char ch;
int i;

/* Write alphabet characters to stdout*/
for (i = 0; i <= 9; i++)
{
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
}
