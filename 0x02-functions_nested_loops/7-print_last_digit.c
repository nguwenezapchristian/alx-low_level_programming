#include "main.h"
/**
 * last_digit - entry point
 * description: 'last digit doubled'
 * @n: integer
 * description: 'last digit doubled'
 */
void last_digit(int n)
{
	int x = n % 10;
	char i = 0;

	while (i <= 1)
	{
		_putchar(x);
		i++;
	}
}
/**
 * print_last_digit - entry point
 * @n: number
 * description: 'last digit of a number'
 * Return: Always last digit of a number
 */
int print_last_digit(int n)
{
	int lDigit = last_digit(n);

	return (lDigit);
}
