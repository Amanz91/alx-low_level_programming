#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: integer to be converted
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int b_value = 0;

	for (i = 63; i >= 0; i--)
	{
		b_value = n >> i;

		if (b_value & 1)
		{
			_putchar('1');
			count++;
		}
		else
		{
			_putchar('0');
		}
	}
}
