#include "main.h"
/**
 * print_alphabet - entry point
 * description: 'print alphabet'
 * returns: Always void (success)
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
/**
 * main - entry point
 * description: 'print alphabet'
 * returns: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
