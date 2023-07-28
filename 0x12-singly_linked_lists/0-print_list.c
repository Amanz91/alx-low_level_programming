#include "lists.h"
#include <stdio.h>
/**
 * print_num -a function to print number
 * @n :numebr to be printed
 * Return: nothing
 */
void print_num(unsigned int n)
{
	if (n / 10)
	{
		print_num(n / 10);
	}
	_putchar((n % 10) + '0');
}
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to linked list
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	unsigned int l, i;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
			count++;
		}
		else
		{
			_putchar('[');
			l = h->len;
			print_num(l);
			_putchar(']');
			_putchar(' ');
			for (i = 0; i < l; i++)
			{
				_putchar(h->str[i]);
			}
			_putchar('\n');
			count++;
		}
		h = h->next;
	}
	return (count);
}
