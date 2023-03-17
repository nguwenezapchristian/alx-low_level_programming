#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in an array
 * @size: size for each element in bytes
 * Return: a pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		a = malloc(nmemb * size);
		if (a == NULL)
		{
			return (NULL);
		}
		else
		{
			for (c = 0; c < nmemb; c++)
			{
				a[c] = 0;
			}
			return (a);
		}
	}
}
