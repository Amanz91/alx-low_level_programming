#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function to print numbers
 * @separator: separatot to use
 * @n: number of arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1) && separator != NULL)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d\n", va_arg(args, int));
	}
	va_end(args);
}		
