#include "main.h"
/**
 * print_alphabet_x10 - print lower case alphabet 10x
 * Return: 0(Success)
 */
void print_alphabet_x10(void)
{
	int c;
	int i = 0;

	while (i < 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
