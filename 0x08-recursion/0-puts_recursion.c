#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: string to be printed
 * Return: s
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return(s);
	}
	_putchar(*s);
	_put_recursion(s + 1);
}
