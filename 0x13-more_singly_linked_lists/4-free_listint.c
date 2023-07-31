#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - a function that frees a list_t list.
 * @head: pointer to linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
