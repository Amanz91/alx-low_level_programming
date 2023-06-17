#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, I;

	for (i = 48; i <= 56; i++)
	{
		for (I = 49; I <= 57; I++)
		{
			if (I > i)
			{
				putchar(i);
				putchar(I);
				if (i != 56 || I != 57)
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
