#include <stdio.h>
/**
 * main - Entry point
 * Description: 'lowercase in reverse'
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* decaralation */
	char lo;

	for (lo = 'z'; lo >= 'a'; lo--)
	{
		putchar(lo);
	}
	putchar('\n');
	return (0);
}
