#include "main.h"
/**
 * print_last_digit - entry point
 * @n: number
 * description: 'last digit of a number'
 * Return: Always last digit of a number
 */
int print_last_digit(int n)
{
	int lDigit = n % 10;

	_putchar(lDigit + '0');
	return (lDigit);
}
