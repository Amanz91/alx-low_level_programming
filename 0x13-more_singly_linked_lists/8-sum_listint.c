#include <stdio.h>
#include "lists.h"
/**
 * sum_listint -  a function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: pointer to listint_t
 * Return: 0 or sum.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int i, sum;

	i = 0;
	sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
		i++;
	}
	return (sum);
}
