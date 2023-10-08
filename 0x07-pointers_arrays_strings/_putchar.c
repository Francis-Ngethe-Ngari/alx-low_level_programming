#include <stdio.h>

/**
 * _putchar - Writes character c to std
 *
 * @c - parameter passed to function which
 * will be called as an arguement
 *
 * Return: On success 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
