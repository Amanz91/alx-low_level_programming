#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: num to be evaluated
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
