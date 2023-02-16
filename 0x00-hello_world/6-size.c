#include <stdio.h>
/* size of various types */
int main(void)
{
	/* variable initialization */
	int i;
	char c;
	double d;
	short s;
	long l;
	/* statements */
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a double: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a short: %lu byte(s)\n", (unsigned long)sizeof(s));
	printf("size of a long: %lu byte(s)\n", (unsigned long)sizeof(l));
	/* return 0 */
	return (0);
}
