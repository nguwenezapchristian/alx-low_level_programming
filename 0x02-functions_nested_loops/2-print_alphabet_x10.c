#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * description: 'print 10 lines of alphabet'
 * Return: Always 0 
 */
void print_alphabet_x10(void)
{
	char a;
	char n = 0;

	while (n < 10)
	{
		_putchar('\n');
		a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
		n++;
	}
}
