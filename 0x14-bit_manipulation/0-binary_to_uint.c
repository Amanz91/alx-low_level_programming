#include "main.h"
/**
 * binary_to_uint- a function that coverts binary no. to decimal
 * @b: binary no. to be converted
 * Return: 0 or decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = ((2 * dec) + (b[i] - '0'));
	}
	return (dec);
}
