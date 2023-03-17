#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two digit numbers
 * @argc: arguments count
 * @argv: arguments array
 * Return: result of multiplication
 */

int main(int argc, char *argv[])
{
	int a;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int *mul;

	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	else if (num1 < 0 || num2 < 0)
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
