#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: array of integer
 */

int *array_range(int min, int max)
{
	int a, n;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(int) * ((max - min) + 1)); 
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (a = 0; a < ((max - min) + 1); a++)
			{
				for ( n = min; n <= max; n++)
				{
					arr[a] = n;
				}
			}
		}
	}
	return (arr);
	free(arr);
}
