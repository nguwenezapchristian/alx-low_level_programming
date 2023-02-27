#include "main.h"

/**
 * rev_string - entry point
 * @s: string to reverse
 * description: reverse a string
 */

void rev_string(char *s)
{
	int t;
	int i = 0;

	for (t = 0; *(s + t) != '\0'; t++)
	{
		i++;
	}
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
