#include "main.h"
/**
 * set_bit - a function that sets the value of a bit at a given index to 1
 * @n: num to be computed
 * @index: index to be checked
 * Return: -1 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);

	return (1);
}
