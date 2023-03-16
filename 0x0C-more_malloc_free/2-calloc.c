#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: size for each element in array
 * Return: a pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *a

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		a = malloc(sizeof(*a) * size);
		if (a == NULL)
		{
			return (NULL);
		}
		else
		{
			return (a);
		}
	}
}
