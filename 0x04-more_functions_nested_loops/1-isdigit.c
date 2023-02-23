/**
 * _isdigit - entry point
 * @c: integer
 * description: 'checks for digit 0-9
 * Return: 1 0r 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
