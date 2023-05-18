#include "lists.h"

/**
 * free_dlistint - deallocte memory
 * @head: pointer to first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
