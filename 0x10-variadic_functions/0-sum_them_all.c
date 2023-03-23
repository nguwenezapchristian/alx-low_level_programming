#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all passed parameter
 * @n: number of arguments
 * Return: return the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, sum;
	va_list ap;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(ap, n);
		for (a = 0; a < n; a++)
		{
			sum += va_arg(ap, unsigned int);
		}
		va_end(ap);
	}
	return (sum);
}
