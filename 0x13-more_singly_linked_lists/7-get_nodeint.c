#include "lists.h"

/**
 * get_nodeint_at_index - get node at specified index
 * @head: pointer to first node
 * @index: index of the node
 * Return: returns the nth node of a listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	size_t i;

	i = -1;
	if (head == NULL)
		return (NULL);
	while ((temp = head) != NULL)
	{
		i++;
		if (i == index)
		{
			return (temp);
		}
		head = head->next;
	}
	return (temp);
}
