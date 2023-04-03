#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to first node
 * Return: the elements of a listint_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
			i++;
		}
		h = h->next;
	}
	return (i);
}
