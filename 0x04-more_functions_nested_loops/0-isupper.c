#include "main.h"
/**
 * _isupper - entry point
 * @c: letter to check
 * description: 'check if c is uppercase'
 * Return: 0 or 1
 */
int _isupper(int c)
{
	char l = 'a';
	char u = 'z';

	if (c >= l && c <= u)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
