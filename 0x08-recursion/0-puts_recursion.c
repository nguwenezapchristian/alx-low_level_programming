#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	if (len == 0)
		return;
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
