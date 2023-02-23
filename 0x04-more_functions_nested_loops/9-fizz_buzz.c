#include <stdio.h>
/**
 * main - entry point
 * description: 'check for multiples of 3 or 5'
 * Return: Always (0)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 3 != 0 || i % 5 != 0)
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
