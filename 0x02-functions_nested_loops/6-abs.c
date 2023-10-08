/* Declare Header Files */
#include "main.h"

/**
 * _abs - function declared to find absolute value of an integer
 *
 * @q: parameter of type int to pass into _abs
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int _abs(int q)
{

	if (q < 0)
	{
		return (-q);
	}

	return (q);
}
