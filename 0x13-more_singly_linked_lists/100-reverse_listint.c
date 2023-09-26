#include "lists.h"

/**
 * reverse_listint - Function that reverses
 * a listint_t linked list.
 *
 * @head: pointer to pointer of type
 * listint_t which rep the head of Linked
 * List.
 *
 * Description: Prev_node and current_node
 * are used to reverse the Singly List in
 * place.
 *
 * Return: pointer to the first node
 * of the reversed list.
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node;
	listint_t *current_node;

	prev_node = NULL;
	current_node = *head;

	while (current_node != NULL)
	{
		*head = current_node;
		current_node = current_node->next;
		(*head)->next = prev_node;
		prev_node = *head;
	}
	return (*head);
}
