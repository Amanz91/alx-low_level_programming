#include "main.h"
/**
 * print_times_table - prints the n times table
 * starts from 0
 * @n: the value of the table to print
 */
void print_times_table(int n)
{
	int l, m, t;

	if (n >= 0 && n <= 15)
	{
		for (l = 0; l <= n; l++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				t = l * m;
				if (t <= 99)
					_putchar(' ');
				if (t <= 9)
					_putchar(' ');
				if (t >= 100)
				{
					_putchar((t / 100) + '0');
					_putchar(((t / 10)) % 10 + '0');
				}
				else if (t <= 99 && t >= 10)
				{
					_putchar((t / 10) + '0');
				}
			_putchar((t % 10) + '0');
			}
		_putchar('\n');
		}
	}
}
