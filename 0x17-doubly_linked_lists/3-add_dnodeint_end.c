#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: points to the first pointer
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *current;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	current = *head;
	if (*head == NULL)
		*head = temp;
	else
	{
		while(current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
		temp->prev = current;
	}
	return (temp);
}
