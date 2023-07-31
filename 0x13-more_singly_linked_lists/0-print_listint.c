#include <stdio.h>
#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer to listint_t
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;
	temp = h;

	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
