#include "main.h"
/**
 * _abs -  a function that computes the absolute value of an integer
 * @c: number to be checked
 * Return: absolute value of number
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = (c * -1);
		return (abs_val);
	}
	return (c);
}