#include "main.h"

/**
 * print_rev - entry point
 * @s: string to reverse
 * description: reverse a string
 */

void print_rev(char *s)
{
	int a = _strlen(s);
	int c;
	char n;

	for (c = (a - 1); c >= 0; c--)
	{
		n = *(s + c);
		_putchar(n);
	}
	_putchar('\n');
}
/**
 * _strlen - entry point
 * @s: string
 * description: return the length of astring
 * Return: length of a string
 */

int _strlen(char *s)
{
	int t;
	int i = 0;

	for (t = 0; *(s + t) != '\n'; t++)
	{
		i++;
	}
	return (i);
}
