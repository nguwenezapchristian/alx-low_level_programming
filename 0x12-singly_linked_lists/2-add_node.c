#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer which point to the list_t
 * @str: pointer to string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		temp = malloc(sizeof(list_t));
		temp->next = *head;
		temp->str = strdup(str);
		*head = temp;
		return (temp);
		free(temp);
	}
}
