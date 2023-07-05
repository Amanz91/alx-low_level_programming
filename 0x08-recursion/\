#include "main.h"
int act_is_prime_number(int n);
/**
 * is_prime_number - a function to determine if number is prime
 * @n: number to be evaluated
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (act_is_prime_number(n, n - 1));
}
/**
 * act_is_prime_number - a function to evaluate if a num is prime
 * @n: number to be evaluated
 * @i: num of iteration
 * Return: 0
 */
int act_is_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (act_is_prime_number(n, i - 1));
}
