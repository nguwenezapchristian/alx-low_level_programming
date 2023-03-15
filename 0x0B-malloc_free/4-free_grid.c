#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free allocated memory
 * @grid: allocated memory
 * @height: height of an array
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
}
