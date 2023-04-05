#include "lists.h"

/**
 * free_list - free allocated memory of a list
 * @h: pointer to the first node
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
