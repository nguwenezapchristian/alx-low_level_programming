#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: concatenated string or NULL if string is empty
 */

char *str_concat(char *s1, char *s2)
{
	int i, n = 0, size1 = 1, size2 = 1;
	char *s1_s2;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			size1++;
		}
		for (i = 0; s2[i] != '\0'; i++)
		{
			size2++;
		}
		n = size1 + size2;
		s1_s2 = malloc(n * sizeof(*s1_s2));
		if (s1_s2 == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; s1[i] != '\0'; i++)
			{
				s1_s2[i] = s1[i];
			}
			for (i = 0; s2[i] != '\0'; i++)
			{
				s1_s2[i + (size1 - 1)] = s2[i];
			}
			return (s1_s2);
			free(s1_s2);
		}
	}
	return (0);
}
