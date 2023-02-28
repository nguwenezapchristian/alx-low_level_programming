#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * @a: array of type int
 * @n: integer
 * description: print array
 */

void print_array(int *a, int n)
{
	int c;
	int p = 0;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		while (p == c && p < (n - 1))
		{
			putchar(',');
			putchar(' ');
			p++;
		}
	}
	putchar('\n');
}
