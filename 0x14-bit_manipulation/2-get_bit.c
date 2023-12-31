#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: num to be computed
 * @index: index to be checked
 * Return: -1 or val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
	{
		return (-1);
	}

	val = ((n >> index) & 1);

	return (val);
}
