#include "main.h"
/**
 * times_table - entry point
 * description: 'times table'
 * Return: always table
 */
void times_table(void)
{
	int l = 10;
	int a, b, c, d, e, f, g, h, i, j;
	int a1, b1, c1, d1, e1, f1, g1, h1, i1, j1;
	while (l < 10)
	{
		a = 0;
		a1 = 48;
	while (a <10)
	{
		_putchar(a1);
		_putchar(',');
		_putchar(' ');
		a++;
	}
	_putchar('\n');
	l++;
	        b = 0;
		b1 = 48;
        while (b <10)
        {
                _putchar(b1);
                _putchar(',');
                _putchar(' ');
		b++;
                b1 += 2;
        }
        _putchar('\n');
        l++;
	        c = 0;
		c1 = 48;
        while (c <10)
        {
                _putchar(c1);
                _putchar(',');
                _putchar(' ');
		c++;
                c1 += 3;
        }
        _putchar('\n');
        l++;
	        d = 0;
		d1 = 48;
        while (d <10)
        {
                _putchar(d1);
                _putchar(',');
                _putchar(' ');
		d++;
		d1 += 4;
        }
        _putchar('\n');
        l++;
	        e = 0;
		e1 = 48;
        while (e <10)
        {
                _putchar(e1);
                _putchar(',');
                _putchar(' ');
		e++;
                e1 += 5;
        }
        _putchar('\n');
        l++;
	}
}
