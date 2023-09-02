#include "main.h"

/**
 * main - Function performs addition
 * operation to arguments passed by user,
 * if none returns 0, if invalid argument
 * it returns an Error ouput.
 *
 * @argc: integer variable that stores
 * the number of command-line arguments
 * passed by the user including the name
 * of the program.
 *
 * @argv: is an array of character pointers
 * listing all the arguments.
 *
 * description: program checks if arguements passed
 * are integers then performs a summation, if the
 * arguments passed is a mixture of integers and
 * symbols or letters, it prints Error. A for loop
 * is used to loop through arguments passed to check
 * if its a digit, the isdigit function is invocked.
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j;
	int num, sum;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			char *argv1;

			argv1 = argv[i];
			for (j = 0; j < argv1[j]; j++)
			{
				if (!isdigit(argv1[j]))
				{
					printf("Error\n");
					return (1);
				}

			}
			num = atoi(argv1);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
