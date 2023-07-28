#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * my_strlen - a function to print length of string
 * @s :numebr to be printed
 * Return: length
 */
size_t my_strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != NULL)
	{
		len++
	}
	return (len);
}
/**
 * add_node - a function that adds a new node at beginning of  list_t list.
 * @head: pointer to pointer of linked list
 * @str: pointer to sting to be added
 * Return: linked list pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sieof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = my_strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
