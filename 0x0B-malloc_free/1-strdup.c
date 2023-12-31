#include "main.h"
/**
 * _strlen -  a function that that gives length of string
 * @s: string to be checked
 * Return: length
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  a function that duplicates an array of chars
 * @str: string to be copied
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	int size;
	int i;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str);

	a = malloc((size + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		a[i] = str[i];
		i++;
	}
	return (a);
}
