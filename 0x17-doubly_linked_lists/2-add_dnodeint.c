#include "lists.h"
/**
 * dlistint_t *add_dnodeint - a func that adds element to a list
 * @head: a double pointer to list
 * @n: element to be added
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->prev != NULL)
		{
			temp = temp->prev;
		}
		temp->prev = new;
		new->next = temp;
	}
	return (new);
}
