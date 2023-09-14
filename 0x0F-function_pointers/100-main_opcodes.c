#include "function_pointers.h"

/**
 * print_Own_Opcodes - defined to print opcodes of
 * its own main function.
 *
 * @no_of_bytes: integer parameter which
 * specifies how many bytes of opcode to print.
 *
 * Description:
 * Inside print_Own_Opcodes, we declare
 * a pointer code that points to the memory address
 * of the print_Own_Opcodes function itself.
 *
 * We use a while loop to iterate over the first no_of_bytes
 * of the function's memory representation and print
 * them as hexadecimal values using printf("%02x", code[itr]).
 *
 * Return: Nothing
 *
 */

void print_Own_Opcodes(int no_of_bytes)
{
	unsigned char *code = (unsigned char *)print_Own_Opcodes;
	int itr = 0;

	while (itr < no_of_bytes)
	{
		printf("%02x", code[itr]);
		itr++;
	}
	printf("\n");
}

/**
 * main - entry point (Function execution begins)
 *
 * @argc: Argument Counter.
 * @argv: Argument Vector.
 *
 * Description:
 * In the main function, we check the command-line
 * arguments. If there are not exactly two arguments
 * (including the program name itself), we print "Error"
 * and return with an exit code of 1.
 *
 * We use atoi to convert the argv[1] (the number_of_bytes)
 * from a string to an integer and store it in the no_of_bytes
 * variable.
 *
 * We check if no_of_bytes is negative, and if so, we print
 * "Error" and return with an exit code of 2.
 *
 * If all the checks pass, we call print_Own_Opcodes with
 * numBytes to print the opcodes of the program's own
 * main function.
 *
 * Return: 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int no_of_bytes = atoi(argv[1]);

	if (no_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_Own_Opcodes(no_of_bytes);
	return (0);
}
