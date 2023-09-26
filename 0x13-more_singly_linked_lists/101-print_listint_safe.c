# include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	size_t counter;
	const listint_t *advance_1;
	const listint_t *advance_2;
	const listint_t *loop_note = NULL;
	
	if (head == NULL)
	{
		exit(98);
	}

	while (advance_2 != NULL && advance_2->next != NULL)
	{
		advance_1 = advance_1->next;
		advance_2 = advance_2->next->next;

		if (advance_1 == advance_2)
		{
			loop_note = advance_1;
			break;
		}
	}
	if (loop_note == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			counter++;
		}
	}
	else
	{
		while (head != loop_note)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			counter++;
		}
		printf("-> [%p] %d\n", (void *)loop_note, loop_note->n);
	}
	return (counter);
}
