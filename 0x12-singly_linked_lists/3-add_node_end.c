#include "lists.h"

/**
 * add_node_end - Program to add a new node at end
 * of linked list.
 *
 * @head: Pointer that keeps track of the end node
 * of a linked list: list_t
 * @str: pointer to node being added to list_t.
 *
 * Return: Address of new element or NULL if it fails.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *latest;
	list_t *latest_end;
	size_t len;

	latest_end = *head;
	len = 0;

	while (str[len])
		len++;

	latest = malloc(sizeof(list_t));

	if (!latest)
		return (NULL);

	latest->str = strdup(str);
	latest->len = len;
	latest->next = NULL;

	if (*head == NULL)
	{
		*head = latest;
		return (latest);
	}

	while (latest_end->next)
	{
		latest_end = latest_end->next;
	}
		latest_end->next = latest;

	return (latest);
}

