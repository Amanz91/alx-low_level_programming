#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - fun that adds new elements at beginning of listint_t list
 * @head: pointer to listint_t
 * @n: element to be added
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
