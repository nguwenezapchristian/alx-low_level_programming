#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: pointer to the first node
 * @n: integer
 * Return: the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *nnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	current = *head;
	nnode->n = n;
	nnode->next = NULL;
	if (*head == NULL)
	{
		*head = nnode;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = nnode;
	}
	return (*head);
}
