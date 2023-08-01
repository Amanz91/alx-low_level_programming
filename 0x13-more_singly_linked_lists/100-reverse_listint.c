#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to listint_t
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p_node, *n_node;
	p_node = NULL;
	n_node = NULL;
	
	while (*head != NULL)
	{
		n_node = ((*head)->next);
		((*head)->next) = p_node;
		p_node = *head;
		*head = n_node;
	}
	*head = *p_node;
	return (*head);
}
