#include "main.h"

/**
 * _isupper -function declared to check if
 * character is uppercase or not.
 *
 * @c: parameter represents character
 * passed to function which is checked
 * whether its uppercase or not.
 *
 * Return: status 1 if argument passed is
 * uppercase, otherwise 0.
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
