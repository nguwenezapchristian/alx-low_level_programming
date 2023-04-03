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
	size_t i;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		for (i = 0; str[i]; i++)
			;
		temp->next = *head;
		temp->str = strdup(str);
		temp->len = i;
		*head = temp;
		return (*head);
		free(temp);
	}
}
