#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: string one
 * @s2: string 2
 * @n: first n bytes of s2
 * Return: a pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int c, s1len, s2len;

	s1len = strlen(s1);
	s2len = strlen(s2);
	if (s2 != NULL)
	{
		a = malloc(sizeof(*a) * (s1len * s2len));
	}
	else
	{
		a = malloc(sizeof(*a) * s1len);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (c = 0; c < s1len; c++)
		{
			a[c] = s1[c];
		}
		if (n >= s2len)
		{
			for (c = 0; c < s2len; c++)
			{
				a[c + s1len] = s2[c];
			}
		}
		else
		{
			for (c = 0; c < n; c++)
			{
				a[c + s1len] = s2[c];
			}
		}
	}
	return (a);
}
