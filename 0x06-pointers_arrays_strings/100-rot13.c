#include  "main.h"

/**
 * rot13 - encodes a string
 * @a: string to encode
 * return: encoded string
 */

char *rot13(char *a)
{
	int l;

	for (l = 0; *(a + l) != '\0'; l++)
	{
		if ((*(a + l) >= 97 && *(a + l) <= 109) || (*(a + l) >= 65 && *(a + l) <= 77))
		{
			*(a + l) = *(a + l) + 13;
		}
		else if ((*(a + l) >= 110 && *(a + l) <= 122) || (*(a + l) >= 78 && *(a + l) <= 90))
		{
			*(a + l) = *(a + l) - 13;
		}
	}
	return (a);
}
