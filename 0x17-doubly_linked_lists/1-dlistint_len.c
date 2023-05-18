#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head
 * Return: the number of elemets
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	unsigned int a;

	a = 0;
	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		a++;
	}
	return (a);
}
