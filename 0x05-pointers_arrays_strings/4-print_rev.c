#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse
 * @s: string to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;
	int a;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (a = i; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
