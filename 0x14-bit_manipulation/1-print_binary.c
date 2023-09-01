#include "main.h"
/**
 * print_binary - a function that converts decimal to binary
 * @n: binary no. to be conveted
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin;
	int i, c = 0;

	for (i = 63; i >= 0; i--)
	{
		bin = (n >> i);

		if (bin & 1)
		{
			_putchar ('1');
			c++;
		}
		else if (c)
		{
			_putchar ('0');
		}
	}
	if (!c)
		_putchar ('0');
}
