#include "main.h"
/**
 * _atoi -  a function that converts a string to integer
 * @s: string to be converted
 * Return: the integer conversion
 */
int _atoi(char *s)
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	while (s[d] != '\0')
	{
		d++;
	}
	while (a < d && e == 0)
	{
		if (s[a] == '-')
		{
			++d;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			f = s[a] - '0';
			if (b % 2)
			{
				f = -f;
			c = c * 10 + f;
			f = 1;
			}
			if (s[a + 1] < '0' || s[i + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);
	return (c);
}
