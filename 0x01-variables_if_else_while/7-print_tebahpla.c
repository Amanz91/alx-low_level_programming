#include <stdio.h>
/**
 * main - a program to print zero to nine using putchar
 * Return: 0 (Success)
*/
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
putchar('\n');
return (0);
}
