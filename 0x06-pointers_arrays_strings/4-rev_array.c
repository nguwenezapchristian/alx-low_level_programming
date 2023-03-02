#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements in an array
 */

void reverse_array(int *a, int n)
{
	int i;
	int p = 0;

	for (i = (n - 1); i >= 0; i--)
	{
		*(a + p) = *(a + i);
		p++;
	}
}
