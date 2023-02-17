#include <stdio.h>
/**
 * main - Entry point 
 * Description: 'lower and upper case'
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* decaralation */
	char lo;
	char up;

	for (lo = 'a'; lo <= 'z'; lo++)
	{
		putchar(lo);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up, "\n");
	}
	/* return zero */
	return (0);
}
