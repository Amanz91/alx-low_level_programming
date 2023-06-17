#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, I;

	for (i = 0; i <= 8; i++)
	{
		for (I = 1; I <= 9; I++)
		{
			if (i < I)
			{
				putchar(i);
				putchar(I);
				if (i != 8 || I != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
