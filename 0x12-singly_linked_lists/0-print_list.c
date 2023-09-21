#include "lists.h"

/**
 * print_list - Function that prints all elements of
 * list_t.
 *
 * @h: pointer list_t.
 *
 * Return: number of nodes.
 *
 */

size_t print_list(const list_t *h)
{
	size_t itr;

	itr = 0;

	if (h == NULL)
	{
		return (itr);
	}

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		itr++;
	}
	return (itr);
}
