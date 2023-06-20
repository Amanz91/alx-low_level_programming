#include <main.h>
/**
 * print_sign - prints the sign of an number
 * @n: number to be checked
 * Return: 1 or 0
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == '0')
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	else if (n < '0')
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
}
