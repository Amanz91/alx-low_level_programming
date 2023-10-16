#include "lists.h"
/**
 * sum_dlistint - func gets sum of element list
 * @head: a pointer to list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int y;

	y = 0;

	if (head == NULL)
		return (0);
	temp = head;

	while (temp)
	{
		y += temp->n;
		temp = temp->next;
	}
	return (y);
}
