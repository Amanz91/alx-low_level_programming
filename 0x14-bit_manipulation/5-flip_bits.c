#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first no. to be computed
 * @m: second no. to be computed
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, temp;
	unsigned int c = 0;
	int i;

	xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		temp = (xor >> i);

		if (temp & 1)
		{
			c++;
		}
	}
	return (c);
}
