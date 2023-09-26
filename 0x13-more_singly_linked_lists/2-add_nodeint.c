#include "lists.h"

/**
 * add_nodeint - Program to add a new node at begining
 * of linked list.
 *
 * @head: Pointer that keeps track of the starting node
 * of a linked list: list_t
 * @n:parameter of type int passed as an argument.
 *
 * Return: Address of new element or NULL if it fails.
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *latest_node;

	latest_node = malloc(sizeof(listint_t));

	if (!latest_node)
	{
		return (NULL);
	}

	latest_node->n = n;
	latest_node->next = (*head);
	(*head) = latest_node;

	return (latest_node);
}
