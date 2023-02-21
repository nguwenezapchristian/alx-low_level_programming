#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * printword - print a word
 * description: 'write a word'
 * Return: Always 0 (success)
 */
int printword(void)
{
        int word[] = "_putchar";
        int i = 0;

        while (word[i] != '\0')
        {
                _putchar(word[i]);
                i++;
        }
        _putchar('\n');
        return (0);
}
