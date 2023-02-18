#include <stdio.h>
/**
 * main - entry point
 * Description: 'print single digit'
 * Return: Always 0 (success)
 */
int main(void)
{
	/* decaraltion and assigning */
	int digit = '0';

	/* statement */
	while (digit <= '9')
	{
		putchar(digit);
		putchar(',');
		putchar(' ');
		digit++;
	}
	putchar('\n');
	return (0);
}
