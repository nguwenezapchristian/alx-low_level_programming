#include "main.h"
/**
 * print_line - entry point
 * @n: number of ' _ '
 * description: 'print line'
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = 0;

		while (n > x)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}
