#include "lists.h"
#include <stdio.h>
/**
 * list_len - a function that return no. of elements of a list_t list.
 * @h: pointer to linked list
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
