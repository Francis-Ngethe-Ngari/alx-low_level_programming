#include "lists.h"

/**
 * listint_len - Function that returns the no of elements in
 * a listint_t.
 *
 * @h: pointer singly linked list.
 *
 * Return: number of elements in the linked list.
 *
 */

size_t listint_len(const listint_t *h)
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
