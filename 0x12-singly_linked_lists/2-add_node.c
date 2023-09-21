#include "lists.h"

/**
 * add_node - Program to add a new node at begining
 * of linked list.
 *
 * @head: Pointer that keeps track of the starting node
 * of a linked list: list_t
 * @str: pointer to node being added to list_t.
 *
 * Return: Address of new element or NULL if it fails.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *latest;

	size_t len;

	len = 0;

	while (str[len])
	{
		len++;
	}

	latest = malloc(sizeof(list_t));

	if (!latest)
	{
		return (NULL);
	}

	latest->str = strdup(str);
	latest->len = len;
	latest->next = (*head);
	(*head) = latest;

	return (*head);

