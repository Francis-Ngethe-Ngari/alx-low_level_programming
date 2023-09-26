#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes
 * the node at index of Linked List.
 *
 * @head: pointer to pointer of type listint_t which
 * represents the head of Linked List.
 *
 * @index: represents the position of node which should
 * be deleted.
 *
 * Return: 1 if it passes or - 1 if it fails.
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *node_to_del;
	unsigned int counter;

	if (*head == NULL)
		return (-1);

	/* Deleting the first node */
	if (index == 0)
	{
		listint_t *first_node;

		first_node = *head;
		*head = (*head)->next;
		free(first_node);
		return (1);
	}

	current_node = *head;
	counter = 0;

	while (current_node != NULL && counter < index - 1)
	{
		current_node = current_node->next;
		counter++;
	}

	if (current_node == NULL || current_node->next == NULL)
		/* Index out of bounds */
		return (-1);

	/* update the next pointer of previous node */
	node_to_del = current_node->next;
	current_node->next = current_node->next->next;

	/* Free node to be deleted */
	free(node_to_del);
	return (1);
}
