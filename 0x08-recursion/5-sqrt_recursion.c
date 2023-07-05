#include "main.h"
int act_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - a function to returs the natural square root of a number
 * @n: number to be evaluated
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (act_sqrt_recursion(n, 0));
}
/**
 * act_sqrt_recursion - a function to returs the natural square root
 * @n: number to be evaluated
 * @i: num of iteration
 * Return: 0
 */
int act_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (act_sqrt_recursion(n, i + 1));
}
