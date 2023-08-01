#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index -  a function that returns the nth node of a listint_t
 * linked list.
 * @head: pointer to listint_t
 * @index: node to be returned
 * Return: pointer or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;

	while (temp != NULL &&  i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
