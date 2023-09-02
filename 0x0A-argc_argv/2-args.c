#include "main.h"

/**
 * main - Excutes to output the arguements
 * passed by user in command-line
 *
 * @argc: integer variable that stores
 * the number of command-line arguments
 * passed by the user including the name
 * of the program.
 *
 * @argv: is an array of character pointers
 * listing all the arguments.
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
