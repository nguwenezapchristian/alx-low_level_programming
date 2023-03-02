#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l1 = 0, a;

	for (a = 0; *(dest + a) != '\0'; a++)
	{
		l1++;
	}
	for (a = 0; a < n; a++)
	{
		*(dest + (l1 + a)) = *(src + a);
	}
	return (dest);
}
