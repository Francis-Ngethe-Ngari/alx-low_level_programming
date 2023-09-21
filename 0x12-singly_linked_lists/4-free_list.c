#include "lists.h"

/**
 * free_list - Program to free linked list memory.
 *
 * @head: pointer that track the first elements in the
 * linked list list_t.
 *
 * Return: Nothing.
 *
 */

void free_list(list_t *head)
{
	list_t *latest_end;

	while (head)
	{
		latest_end = head->next;
		free(head->str);
		free(head);
		head = latest_end;
	}
}
