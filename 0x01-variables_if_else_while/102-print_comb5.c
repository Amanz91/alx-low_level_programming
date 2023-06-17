#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, I;

	for (i = 0; i < 100; i++)
	{
		for (I = 0; I < 100; I++)
		{
			if (i < I)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((I / 10) + 48);
				putchar((I % 10) + 48);
				if (i != 98 || I != 99)
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
