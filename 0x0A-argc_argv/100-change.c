# include "main.h"

/**
 * main - prints minimum amount of coins to
 * make change for a specific amount of money.
 *
 * @argc: Represents number of arguements.
 * @argv: arguement vector which points to
 * strings.
 *
 * Return: 0 for success
 *
 */

int main(int argc, char *argv[])
{
	int cents, no_coins;

	if (argc == 1 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		no_coins += 1;
	}
	printf("%d\n", no_coins);
	return (0);
}
