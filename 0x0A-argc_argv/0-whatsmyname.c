#include "main.h"

/**
 * main - Excutes to  output name of
 * program.
 *
 * @argc: integer variable that stores
 * the number of command-line arguments
 * passed by the user including the name
 * of the program.
 *
 * @argv: is an array of character pointers
 * listing all the arguments.
 *
 * Return: A new name for program once user
 * modifies it manually.
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
		argc++;
	}
	return (0);
}
