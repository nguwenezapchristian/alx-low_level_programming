#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: current node
 * @str: pointer to string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode;
	list_t *current;
	size_t i;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
	{
		return (NULL);
	}
	current = *head;
	for (i = 0; str[i]; i++)
		;
	nnode->len = i;
	nnode->str = strdup(str);
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
