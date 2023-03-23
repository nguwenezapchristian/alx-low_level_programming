#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print strings
 * @separator: separate two strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list ap;
	char *arr;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		arr = va_arg(ap, char *);
		if (arr == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", arr);
			if (a < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(ap);
}
