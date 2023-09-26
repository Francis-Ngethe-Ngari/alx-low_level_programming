#include "lists.h"

/**
 * pop_listint - Function that deletes head node
 * of a linked list.
 *
 * @head: pointer to a pointer of type listint_t
 * which represents head of Linked list.
 *
 * Description: First step is to check if linked list
 * is empty.
 * Store data of head node to variable n_data.
 * Create a temporary pointer to head.
 * Updating pointer to nexr node.
 * Free memory of previous head node.
 * Return data of deleted head node.
 *
 * Return: 0 if linked list is empty or heads node
 * data(n).
 *
 */

int pop_listint(listint_t **head)
{
	int n_data;
	listint_t *temp_ptr;

	if ((*head) == NULL)
		return (0);

	n_data = (*head)->n;

	temp_ptr = *head;

	*head = (*head)->next;

	free(temp_ptr);
	return (n_data);
}
