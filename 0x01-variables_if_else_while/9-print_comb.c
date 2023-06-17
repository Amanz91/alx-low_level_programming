#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 * Retirn: 0 (Success)
*/

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
return (0);
}
