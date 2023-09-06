#include "main.h"

/**
 * argstostr - Function that concatenates
 * all arguements of a program.
 *
 * @ac: represent arguement count.
 * @av: represents arguement vector
 * (array of strings).
 *
 * Return: a pointer to a new string or NULL
 * in failure.
 *
 */

char *argstostr(int ac, char **av)
{
	int len;
	int itr;
	int position;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;

	for (itr = 0; itr < ac; itr++)
		len += strlen(av[itr]) + 1;

	ptr = (char *)malloc(len + 1);

	if (ptr == NULL)
		return (NULL);

	position = 0;

	for (itr = 0; itr < ac; itr++)
	{
		strcpy(&ptr[position], av[itr]);
		position += strlen(av[itr]);
		ptr[position] = '\n';
		position++;
	}
	ptr[position] = '\0';

	return (ptr);
}
