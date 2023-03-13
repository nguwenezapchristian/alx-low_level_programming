#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two arg
 * @argc: argument count
 * @argv: argument array
 * Return: sum or 1
 */

int main(int argc, char *argv[])
{
	int i, sum = 1, bul = 0;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
		bul = 0;
	}
	else
	{
		printf("Error\n");
		bul = 1;
	}
	return (bul);
}
