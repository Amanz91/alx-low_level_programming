#include "lists.h"
/**
 * dlistint_t *insert_dnodeint_at_index - a func that adds element to a list
 * @h: a double pointer to list
 * @idx: index
 * @n: element to be added
 * Return: address of new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;

	temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	new->next->prev = new;
	temp->next = new;
	return (new);
}
