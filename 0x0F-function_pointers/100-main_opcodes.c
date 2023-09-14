#include "function_pointers.h"

/**
 * main - Entry point which takes command-line
 * arguments argv and argc.
 *
 * @argc: arguement counter.
 * @avgv: argument vector.
 *
 * Return: 0 Always (Successful)
 *
 */

int main(int argc, char *argv[])
{
	int no_bytes;
	int itr;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	no_bytes = atoi(argv[1]);

	if (no_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr = (unsigned char *)main;
	for (itr = 0; itr < no_bytes; itr)
	{
		printf("%02x", ptr[itr]);
	}

	printf("\n");
	return (0);
}
