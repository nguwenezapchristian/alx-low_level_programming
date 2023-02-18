#include <stdio.h>
/**
 * main - Entry point
 * Description: 'lower and upper case'
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* decaralation and assigning */
	char lo = 'a';
	char up = 'z';

	while (lo <= 'z')
	{
		putchar(lo);
		lo++;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	/* return zero */
	return (0);
}
