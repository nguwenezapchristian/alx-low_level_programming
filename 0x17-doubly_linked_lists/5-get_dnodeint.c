#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to first node
 * @index: nth node
 * Return: the nth node or NULL , if it doen't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int n;

	current = head;
	n = 0;
	while (current != NULL)
	{
		if (n == index)
		{
			return (current);
		}
		current = current->next;
		n++;
	}
	return (NULL);
}
