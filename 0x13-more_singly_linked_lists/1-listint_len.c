#include <stdio.h>
#include "lists.h"
/**
 * listint_len - a function that counts all the elements of a listint_t list
 * @h: pointer to listint_t
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
