#include "main.h"

/**
 * _pow_recursion - powers a number
 * @x: integer
 * @y: power
 * Return: returns the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (x == 0)
	{
		return (0);
	}
	else if (x == 1)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
