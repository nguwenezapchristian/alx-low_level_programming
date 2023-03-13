#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicte a string
 * @str: string
 * Return: pointer to duplicate string and NULL if it fails
 */

char *_strdup(char *str)
{
	int i;
	int size = 1;
	char *dupstring;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			size++;
		}
		dupstring = malloc(size * sizeof(*dupstring));
		if (dupstring == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; str[i] != '\0'; i++)
			{
				dupstring[i] = str[i];
			}
			return (dupstring);
			free(dupstring);
		}
	}
	return (0);
}
