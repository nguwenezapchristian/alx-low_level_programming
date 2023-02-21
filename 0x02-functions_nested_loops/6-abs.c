#include "main.h"
/**
 * _abs - entry point
 * @i: integer
 * description: 'absolute number'
 * Return: Always absolute number
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
		return (i * -1);
}
