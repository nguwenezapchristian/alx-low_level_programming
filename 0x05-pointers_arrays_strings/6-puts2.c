#include "main.h"

/**
 * puts2 - entry point
 * @str: string
 * description: skip one character in string
 */

void puts2(char *str)
{
	int c;

	for (c = 0; *(str + c) != '\0'; c += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
