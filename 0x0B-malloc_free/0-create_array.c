#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocates memory for an array and initialize it with a char
 * @size: size of an array
 * @c: char
 * Return: pointer to an array or NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(size * sizeof(*arr));
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				arr[i] = c;
			}
		}
		return (arr);
		free(arr);
	}
	return (0);
}
