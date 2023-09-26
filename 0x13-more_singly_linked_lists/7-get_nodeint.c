#include "lists.h"

/**
 * get_nodeint_at_index - Function to get
 * nth node of linked list.
 *
 * @head: pointer to linked list begining
 * elements.
 * @index: position of node starting o to -1.
 *
 * Return: if node doesn't exist return NULL.
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;

	while (head != NULL)
	{
		if (counter == index)
		{
			return (head);
		}
		head = head->next;
		counter++;
	}
	return (NULL);
}
