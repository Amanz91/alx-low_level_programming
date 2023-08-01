#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes a node at the nth node of
 * a listint_t linked list.
 * @head: pointer to listint_t
 * @index: index at which node is to be deleted
 * Return: 1 (success), -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *len, *temp, *n_next;
	unsigned int i = 0;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	len = *head;

	while (len != NULL)
	{
		count++;
		len = len->next;
	}
	if (index > count)
		return (-1);

	if (index == 0)
	{
		temp = ((*head)->next);
		free(*head);
		*head = temp;
		return (1);
	}
	temp = *head;

	while (i < (index - 1))
	{
		temp = temp->next;
		i++;
	}
	n_next = temp->next;
	temp->next = n_next->next;
	free(n_next);
	return (1);
}
