#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - a function that frees a list_t list.
 * @head: pointer to linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
