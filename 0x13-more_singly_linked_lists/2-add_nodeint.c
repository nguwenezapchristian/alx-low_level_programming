#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: pointer to the first node
 * @n: integer
 * Return: the node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->next = *head;
	nnode->n = n;
	*head = nnode;
	return (*head);
	free(nnode);
}
