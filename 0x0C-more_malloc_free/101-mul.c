#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two digit numbers
 * @num1: 1st argument
 * @num2: 2nd argument
 * Return: result of multiplication
 */

int main(int num1, int num2)
{
	int *mul;

	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		mul = malloc(sizeof(*mul) * 2);
		if (mul == 0)
		{
			return (1);
		}
		else
		{
			*mul = num1 * num2;
			printf("%d\n", *mul);
			free(mul);
		}
	}
	return (0);
}
