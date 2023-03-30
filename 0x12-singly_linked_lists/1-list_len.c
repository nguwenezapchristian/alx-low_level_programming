#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - the number of elements in linked list
 * @h: pointer to list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
