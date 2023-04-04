#include "lists.h"

/**
 * sum_listint -  sums of all the data (n) of a listint_t
 * @head: pointer to the first node
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	size_t sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while ((temp = head) != NULL)
	{
		sum += temp->n;
		head = head->next;
	}
	return (sum);
}
