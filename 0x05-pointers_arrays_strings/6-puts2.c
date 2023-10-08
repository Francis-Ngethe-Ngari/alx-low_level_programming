#include "main.h"
#include <stdio.h>
/**
 * puts2 - function that prints a string, followed by a new line
 *
 * @str: parameter n is declared as a pointer of char
 * type which is to be passed to function puts2
 *
 * Return: Always 0 (success)
 *
 */

void puts2(char *str)
{
	char temp = *str;

	while ((*str != '\0') && (*str > '\0'))
	{
		if (temp % 2 == 0)
		{
			putchar(*str);
			str++;
		}
	}
	putchar('\n');
}

int main(void)
{
    char *str1, *str2;

    str1 = "0123456789";
    str2 = "Holberton!\0Holberton";
    puts2(str1);
    puts2(str2);
    return (0);
}
