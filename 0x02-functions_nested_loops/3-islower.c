/* Declare Header Files */
#include "main.h"

/**
 * _islower - function declared to check whether character is lowercase
 *
 * @c: parameter of type int to pass into _islower
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
