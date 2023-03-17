#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 * Return: a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(sizeof(*a) * b);
	if (a == NULL)
	{
		exit(98);
	}
	else
	{
		return (a);
		free(a);
	}
}
