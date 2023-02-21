#include "main.h"
/**
 * print_sign - entry point
 * @n: the number to test
 * description: 'test if the number is positive or negative'
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
