#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: binary num to be converted
 * Return: 0 or unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int d_value = 0;

	if (*b == '\0')
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		d_value = ((2 * d_value) + (b[i] - '0'));
	}
	return (d_value);
}
