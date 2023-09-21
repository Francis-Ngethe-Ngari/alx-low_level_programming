#include "lists.h"

/**
 * list_len - Program that returns the list of elements in
 * a list_t.
 *
 * @h: pointer singly linked list.
 *
 * Return: number of elements in the linked list.
 *
 */

size_t list_len(const list_t *h)
{
	size_t no_elements;

	no_elements = 0;

	while (h)
	{
		no_elements++;
		h = h->next;
	}
	return (no_elements);
}
