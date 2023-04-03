#include "lists.h"

/**
 * listint_len - number of elements in a linked
 * @h: pointer to the first node
 * Return: number of elements in a linked
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->n != 0)
		{
			i++;
		}
		h = h->next;
	}
	return (i);
}
