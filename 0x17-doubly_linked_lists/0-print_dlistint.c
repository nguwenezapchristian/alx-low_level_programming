#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	unsigned int a;

	a = 0;
	tmp = h;
	while (tmp != NULL)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		a++;
	}
	return (a);
}
