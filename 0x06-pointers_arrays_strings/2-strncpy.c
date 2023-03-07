#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: integer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}
