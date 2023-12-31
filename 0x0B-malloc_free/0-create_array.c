#include "main.h"
#include <stdlib.h>
/**
 * create_array -  a function that creates an array of chars
 * @size: size of array
 * @c: char in array
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc((size) * sizeof(char));
	if (a == NULL || size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);
}
