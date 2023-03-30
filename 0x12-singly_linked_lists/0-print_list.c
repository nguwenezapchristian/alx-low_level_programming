#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all elements of list
 * @h: pointer to list_t struct
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			n++;
		}
		else
		{
			printf("[0] (nil)\n");
			n++;
		}
		h = h->next;
	}
	return (n);
}
