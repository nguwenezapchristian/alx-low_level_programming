#include "main.h"
/**
 * print_diagonal - entry point
 * @n: number of ' \ '
 * description: 'print diagonal'
 */
void print_diagonal(int n)
{
	int x,z;

	for (x = 0; x < n; x++)
	{
		for (z = 0; z < x; z++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
