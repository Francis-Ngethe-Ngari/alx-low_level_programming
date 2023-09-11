#include <stdio.h>

/**
 * main - Excutes to  output name of the
 * program which it was compiled from.
 *
 * Return: 0 indicating (success).
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
