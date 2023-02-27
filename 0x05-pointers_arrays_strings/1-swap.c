#include "main.h"

/**
 * swap_int - entry point
 * @a: integer
 * @b: integer
 * description: 'swaps integer a and b'
 */

void swap_int(int *a, int *b)
{
	int n, c;

	n = *a;
	c = *b;
	*a = c;
	*b = n;
}
