#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char ch;
int i;

/* Write alphabet characters to stdout*/
for (i = 0; i <= 9; i++)
{
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
return (0);
}
