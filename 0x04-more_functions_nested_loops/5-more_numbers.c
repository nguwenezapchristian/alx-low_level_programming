#include "main.h"
/**
 * more_numbers - entry point
 * description: '0-14 10 lines'
 */
void more_numbers(void)
{
	int i;
	int a = 0;

	while (a <= 9)
	{
		i = 0;

		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
			i++;
		}
		a++;
		_putchar('\n');
	}
}
