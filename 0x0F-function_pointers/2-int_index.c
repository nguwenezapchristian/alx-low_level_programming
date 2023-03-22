#include "function_pointers.h"

/**
 * int_index - return the index of an integer
 * @array: array of type int
 * @size: size of array
 * @cmp: pointer to function
 * Return: index of an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
		}
	}
	return (a);
}
