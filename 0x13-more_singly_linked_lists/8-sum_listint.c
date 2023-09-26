#include "lists.h"

/**
 * sum_listint - Function gets sum
 * of all data (n) of linked list.
 *
 * @head: pointer to the first
 * node of linked list.
 *
 * Description:
 *
 * Return: sum of all data (n) or 0
 * when linked list is empty.
 *
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		if (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		else
			return (0);
	}
	return (sum);
}
