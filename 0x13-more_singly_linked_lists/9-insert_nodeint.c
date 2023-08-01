#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - a function that insertsa node at the nth node of
 * a listint_t linked list.
 * @head: pointer to listint_t
 * @idx: index at which node is to be inserted
 * @n: element of node to be inserted
 * Return: pointer or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *len, *new, *temp;
	unsigned int i = 0;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));

	if (head == NULL || new == NULL)
		return (NULL);

	len = *head;

	while (len != NULL)
	{
		count++;
		len = len->next;
	}
	if (idx > count)
		return (NULL);
	temp = *head;

	while (i < (idx-1))
	{
		temp = temp->next;
		i++;
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
