/* Declare Header Files */
#include "main.h"

/**
 * _isalpha - function declared to check whether character is lowercase
 * or uppercase
 *
 * @c: parameter of type int to pass into _isalpha
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
