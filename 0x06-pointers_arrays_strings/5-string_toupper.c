#include "main.h"

/**
 * string_toupper - converts to uppercase
 * @s: string to reverse
 * Return: reversed string
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (*(s + a) >= 97 && *(s + a) <= 122)
		{
			*(s + a) = *(s + a) - 32;
		}
	}
	return (s);
}
