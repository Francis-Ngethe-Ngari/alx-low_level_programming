/* Declare Header Files */
#include "main.h"

/**
 * print_alphabet - function declared
 *
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

/* Declaring function print_alphabet */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
