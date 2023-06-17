#include <stdio.h>
/**
 * main - program to print  all the numbers of base sixteen  in lowercase
 * Return: 0 (Success)
*/

int main(void)
{
	int i;
	char c;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
putchar('\n')
return (0);
}
