#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: return the index where value is located, if value is not
 * present in array or if array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i_middle, left, right, i;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");
		i_middle = (left + right) / 2;
		if (array[i_middle] < value)
		{
			left = i_middle + 1;
		}
		else if (array[i_middle] > value)
		{
			right = i_middle - 1;
		}
		else
			return (i_middle);
	}
	return (-1);
}
