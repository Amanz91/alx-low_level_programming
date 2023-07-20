#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of arguments
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int x;
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum = x + sum;
	}
	return (sum);
}
