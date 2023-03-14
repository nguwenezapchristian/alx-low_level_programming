#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of an array
 * @height: height of an array
 * Return: 2 dimensinal array
 */

int **alloc_grid(int width, int height)
{
	int a, c;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(height * sizeof(int *));
		for (a = 0; a < height; a++)
		{
			arr[a] = malloc(width * sizeof(int));
		}
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (a = 0; a < height; a++)
			{
				for (c = 0; c < width; c++)
				{
					arr[a][c] = 0;
				}
			}
			return (arr);
		}
	}
	return (0);
}
