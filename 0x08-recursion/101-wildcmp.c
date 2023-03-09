#include "main.h"

/**
 * wildcmp - compare strings
 * @s1: string one
 * @s2: string two
 * Return: return 1 if strings are identical or 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if ((s1[0] == 0) && (s2[0] == 0))
	{
		return (1);
	}
	else if (((s1[0] != 0) && (s2[0] == 0)) || ((s1[0] == 0) && (s2[0] != 0)))
	{
		return (0);
	}
	else if (s1[0] == s2[0])
	{
		return (wildcmp((s1 + 1), (s2 + 1)));
	}
	return (1);
}
