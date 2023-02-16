#include <stdio.h>
/* size of various types */
int main(void)
{
	/* variable initialization */
	int i;
	char c;
	long int s;
	long long int l;
	float f;
	/* statements */
	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(s));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	/* return 0 */
	return (0);
}
