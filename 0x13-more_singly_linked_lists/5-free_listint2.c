#include "lists.h"

/**
 * free_listint2 - Program to free linked list memory.
 *
 * @head: pointer to pointer of type listint_t which
 * represents head of linked list.
 *
 * Description: Current_node points to the current node
 * which is being processed.
 *
 * Return: Nothing.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return;

	current_node = *head;

	while (current_node)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}

