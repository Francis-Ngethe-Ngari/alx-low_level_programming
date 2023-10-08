/* Declare Header Files */
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
/* Declaring variable ch */

char num = '0';
char ch = 'a';

for (num = '0'; num <= '9'; num++)
putchar(num);

for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');

return (0);
}
