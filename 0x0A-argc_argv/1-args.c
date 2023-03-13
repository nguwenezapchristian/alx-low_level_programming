#include "main.h"
#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: argument count
 * @argv: array argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, a = 0;
	(void)argv;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			a++;
		}
	}
	printf("%d\n", a);
	return (0);
}
