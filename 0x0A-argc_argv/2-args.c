#include "main.h"
#include <stdio.h>

/**
 * main - print all argument
 * @argc: argument count
 * @argv: argument array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
