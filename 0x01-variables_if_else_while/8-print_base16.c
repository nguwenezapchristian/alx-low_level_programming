#include <stdio.h>
/**
 * main - Entry point
 * Description: 'base 16 numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* declaration and assigning */
	char d = '0';
	char c = 'a';

	/* bstatement */
	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
