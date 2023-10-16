#include "lists.h"
/**
 * dlistint_t *get_dnodeint_at_index - func gets element at nth node of list
 * @head: a pointer to list
 * @index: index to find
 * Return: address of new element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int x, y, i;
	
	y = 0;
	temp = *head;
	
	while (temp->prev != NULL)
	{
		temp = temp->prev;
		y++
	}
	if (y > index)
		return NULL;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	x = temp->n;
	return (x);
}
