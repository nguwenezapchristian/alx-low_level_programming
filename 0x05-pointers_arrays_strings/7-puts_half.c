#include "main.h"

/**
 * puts_half - entry point
 * @str: string
 * description: 'prints the half of string'
 */

void puts_half(char *str)
{
	int n, c, p;
	int a = 0;

	for (n = 0; *(str + n) != '\0'; n++)
	{
		a++;
	}
	if (a % 2 == 0)
	{
		for (c = (a / 2); c < a; c++)
		{
			_putchar(str[c]);
		}
	}
	else
	{
		for (p = ((a + 1) / 2); p < a; p++)
		{
			_putchar(str[p]);
		}
	}
	_putchar('\n');
}
