#include "main.h"
#include <stdlib.h>
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to string
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: no of elements of array
 * @size: size of each element
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
