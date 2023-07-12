#include "main.h"
/**
 * create_array -  a function that creates an array of chars
 * @size: size of array
 * @c: char in array
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *a;

	a = malloc((size + 1) * sizeof(char));
	if (a == NULL)
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
