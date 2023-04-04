#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to first node
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		free(current);
		head = head->next;
	}
}
