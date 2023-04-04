#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: pointer to first node
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while ((current = *head) != NULL)
	{
		free((*head));
		*head = (*head)->next;
	}
}
