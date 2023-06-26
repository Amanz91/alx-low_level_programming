#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers
 * @a: fisrt intgeger pointer value to swap
 * @b: second intgeger pointer value to swap
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tem = *a;
	*a = *b;
	*b = tem;
}
