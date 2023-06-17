#include <stdio.h>
/**
 * main - program to print a to z using putchar
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
putchar('\n');
return (0);
}
