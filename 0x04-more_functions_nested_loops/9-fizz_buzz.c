#include <stdio.h>
/**
 * main - entry point
 * description: 'check for multiples of 3 or 5'
 * Return: Always (0)
 */
int main(void)
{
	for (int i = 1, i <= 100, i++)
	{
		if (i % 3)
		{
			printf("Fizz ");
		}
		else if (i % 5)
		{
			printf("Buzz ");
		}
		else if (i % 3 && i % 5)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
	}
	return (0);
}
