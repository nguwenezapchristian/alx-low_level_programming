#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @f: pointer to a function
 * @name: name to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
