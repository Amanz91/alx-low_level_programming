#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int a, b, m, l, f;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			m = a * b;
			if (m > 9)
			{
				l = (m % 10);
				f = ((m - l) / 10);
				_putchar(44);
				_putchar(32);
				_putchar(f + '0');
				_putchar(l + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			_putchar(m + '0');
			}
		}
	_putchar('\n');
	}
}

