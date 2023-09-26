#include "lists.h"

/**
 * insert_nodeint_at_index - function that
 * inserts a new node at a given position.
 *
 * @head: pointer to pointer of type listint_t
 * representing the head of Linked list.
 * @idx: index of the list where the new
 * node should be added. Index starts at 0
 * @n: integer parameter which represents
 * input argument.
 *
 * Return: the address of the new node,
 * or NULL if it failed
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *latest_node;
	listint_t *initial_node;
	unsigned int current_index;

	if (head == NULL)
		return (NULL);

	latest_node = (listint_t *)malloc(sizeof(listint_t));

	if (latest_node == NULL)
		return (NULL);

	latest_node->n = n;
	latest_node->next = NULL;

	if (idx == 0)
	{
		latest_node->next = *head;
		*head = latest_node;
		return (latest_node);
	}

	current_index = 0;
	initial_node = *head;

	if (initial_node != NULL && current_index < idx - 1)
	{
		initial_node = initial_node->next;
		current_index++;
	}

	if (initial_node == NULL)
	{
		free(latest_node);
		return (NULL);
	}

	latest_node->next = initial_node->next;
	initial_node->next = latest_node;
	return (latest_node);
}
