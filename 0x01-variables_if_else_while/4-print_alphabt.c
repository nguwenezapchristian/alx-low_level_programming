#include <stdio.h>
/**
 * main - Entry point
 * Description: 'all alphabet except q and e'
 * return: always 0 (success)
 */
int main(void)
{
	/* Decaralation and assigning */
	char lo = 'a';

	/* statements */
	while (lo <= 'z')
	{
	if (lo != 'e' && lo != 'q')
	{
		putchar(lo);
	}
		lo++;
	}
	putchar('\n');
	/* return 0 */
	return (0);
}
