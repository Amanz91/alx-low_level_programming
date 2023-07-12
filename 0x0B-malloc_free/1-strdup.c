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
char *_strdup(char *str);
{
	int size;
	unsigned int i;
	char *a;

	size = _strlen(char *str);

	a = malloc((size) * sizeof(char));
	if (str == NULL || size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		a[i] = str[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
