#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit at a given index to 0
 * @n: num to be computed
 * @index: index to be checked
 * Return: -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((0UL << index) & *n);

	return (1);
}
