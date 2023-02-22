#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers
 * @n: integer
 * description: 'print natural numbers'
 * Return: natural numbers
 */
void print_to_98(int n)
{
	int x = 98;
	if (n < x)
	{
		while (n < x)
		{
			if (n != x)
			{
				printf("%d, ", n);
			}
			else
				printf("%d", n);
			n++;
		}
	}
	else if (n > x)
	{
		while (n > x)
		{
			if (n != x)
			{
				printf("%d, ", n);
			}
			else
				printf("%d", n);
			n--;
		}
	}
	else
		printf("%d", n);
}
