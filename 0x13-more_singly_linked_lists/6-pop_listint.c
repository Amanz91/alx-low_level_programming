#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: pointer to listint_t
 * Return: 0 or int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if ((*head)->n == NULL || head == NULL)
	{
		return (0);
	}
	temp = *head;
	i = temp->n;
	free(*head);
	*head = temp->next;
	return (i);
}
