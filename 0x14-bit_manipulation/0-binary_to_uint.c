#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - convert binary to an unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum, len;

	len = strlen(b);
	sum = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[len - i - 1] != '0' && b[len - i - 1] != '1')
			return (0);
		sum += (b[len - 1 - i] - '0') * _pow_recursion(2, i);
	}
	return (sum);
}
/**
 * _pow_recursion - powers a number
 * @x: base
 * @y: power
 * Return: returns the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	else if (x == 1)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
