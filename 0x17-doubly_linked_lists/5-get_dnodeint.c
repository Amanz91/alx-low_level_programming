#include "lists.h"
/**
 * dlistint_t *get_dnodeint_at_index - func gets element at nth node of list
 * @head: a pointer to list
 * @index: index to find
 * Return: address of new element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int y;

	y = 0;

	if (head == NULL)
		return NULL;
	temp = head;

	while (temp)
	{
		if (y == index)
			return temp;
		temp = temp->next;
		y++;
	}
	return NULL;
}
