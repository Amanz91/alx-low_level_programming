#include "main.h"
/**
 * reverse_array - a function that reverses a string.
 * @a: string to be reversed
 * @n: source string length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	char b;

	for (i = 0; i <= (n / 2); i++)
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = b;
	}
}
