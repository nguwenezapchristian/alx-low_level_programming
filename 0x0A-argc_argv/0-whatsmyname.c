#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: argument count
 * @argv: array of argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
