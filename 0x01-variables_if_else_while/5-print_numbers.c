#include <stdio.h>
/**
 * main - entry point
 * description: 'print single digit'
 * return: Always 0 (success)
 */
int main(void)
{
	/* decaraltion and assigning */
	int digit = 0;

	/* statement */
	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");
	/* return 0 */
	return (0);
}
