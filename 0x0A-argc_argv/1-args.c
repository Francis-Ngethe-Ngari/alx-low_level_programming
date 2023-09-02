#include "main.h"

/**
 * main - Excutes to ouput the number
 * arguements passed by user
 *
 * @argc: integer variable that stores
 * the number of command-line arguments
 * passed by the user including the name
 * of the program.
 *
 * @argv: is an array of character pointers
 * listing all the arguments.
 *
 * Return: integer which is commands passed
 * and the string passed if applicable
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc == 1)
	{
		argc = 0;
		printf("%d\n", argc);
	}
	else if (argc >= 2)
	{
		argc -= 1;
		printf("%d\n", argc);

	}
	return (0);
}
