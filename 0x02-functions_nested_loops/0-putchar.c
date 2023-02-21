#include "main.h"
/**
 * printword - Entry point
 * description: 'prints a word'
 * Return: Always 0 (success)
 */
int printword(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
/**
 * main - entry point
 * description: 'print a word'
 * Return: Always 0 (success)
 */
int main(void)
{
	printword();
	return (0);
}
