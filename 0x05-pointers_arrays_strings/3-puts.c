#include "main.h"

/**
 * _puts - entry point
 * @str: string
 * description: 'print the string followed by a newline'
 */

void _puts(char *str)
{
	int c;
	char n;

	for (c = 0; *(str + c) != '\0'; c++)
	{
		n = *(str + c);
		_putchar(n);
	}
	_putchar('\n');
}
