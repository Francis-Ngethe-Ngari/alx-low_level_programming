#include "lists.h"

/**
 * print_listint - Function that prints all elements of
 * list_t.
 *
 * @h: pointer listint_t.
 *
 * Description: node_track variable, keeps track of the
 * nodes in linked list.
 *
 * Return: number of nodes.
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t node_track;

	node_track = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_track++;
	}
	return (node_track);
}
