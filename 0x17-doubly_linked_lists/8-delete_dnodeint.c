#include "lists.h"
/**
 * int delete_dnodeint_at_index - a func that deletes nth node of a list
 * @head: a double pointer to list
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	temp = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (tmp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
