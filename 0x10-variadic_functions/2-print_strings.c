#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a function to print strings
 * @separator: separatot to use
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *n;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		n = va_arg(args, char*);

		if (n == NULL)
			printf("(nil)");
		else
			printf("%s", n);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
