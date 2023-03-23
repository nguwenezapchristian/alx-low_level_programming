#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: string which separate numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list ac;

	va_start(ac, n);
	for (a = 0; a < n; a++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(ac, unsigned int));
		}
		else
		{
			printf("%d", va_arg(ac, unsigned int));
			if (a < (n - 1))
			{
				printf("%s", separator);
			}
		}
		va_end(ac);
	}
	printf("\n");
}
