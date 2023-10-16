#include "lists.h"
/**
 * free_dlistint - a func to free list allocated memory
 * @head: list to free
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
