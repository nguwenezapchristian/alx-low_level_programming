#include "main.h"
/**
 * _islower - entry point
 * @c: the character to test
 * description: 'checks for lowercase character'
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
