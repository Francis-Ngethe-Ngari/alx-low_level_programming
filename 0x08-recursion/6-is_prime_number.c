#include "main.h"

/**
 * is_prime_number - Function that checks if
 * integer is a prime number.
 *
 * @n: represents the integer to be passed to function
 * to be checked if prime.
 *
 * Return: 1 if integer is prime number otherwise 0.
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!is_divisible(n, n - 1));
}

/**
 * is_divisible - checks if n is a prime number
 *
 * @n: represents the number to be checked
 *
 * @div: check variable which set to 1 and iterates
 * with every recursion function call
 *
 * Return: 1 if prime else 0
 */

int is_divisible(int n, int div)
{
	if (div == 1)
	{
		return (0);
	}
	if (n % div == 0)
	{
		return (1);
	}
	return (is_divisible(n, div - 1));
}

