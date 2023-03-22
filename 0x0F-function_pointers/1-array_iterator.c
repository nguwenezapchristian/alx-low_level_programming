#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that perfomes action on elements of array
 * @array: array of type int
 * @size: size of array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
