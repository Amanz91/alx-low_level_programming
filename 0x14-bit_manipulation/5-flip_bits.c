#include "main.h"
/**
 * flip_bits -  a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: 1st integer
 * @m: 2nd integer
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int b_value, ex_value;

	ex_value = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		b_value = ex_value >> i;

		if (b_value & 1)
		{
			count++;
		}
	}
	return (count);
}
