#include "main.h"

/**
 * main - Excutes to output the multiplication
 * of arguements passed by user. If none should
 * print Error or if arguements are less
 *
 * @argc: integer variable that stores
 * the number of command-line arguments
 * passed by the user including the name
 * of the program.
 *
 * @argv: is an array of character pointers
 * listing all the arguments.
 *
 * description: main function takes two
 * arguements; 'argc' and 'argv'. atoi in
 * built function is used to convert arguements
 * to integers.The result of product is stored in
 * variable result.
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	if (argc == 3)
	{
		printf("%d\n", result);
	}

	return (0);
}
