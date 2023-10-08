#include "main.h"

/**
 * _isdigit -function declared to check if argument passed
 * to function is a digit.
 *
 * @c: parameter passed to function which shows its data type.
 *
 * Return: status 1 if its a digit and status 0 if its not a digit.
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
