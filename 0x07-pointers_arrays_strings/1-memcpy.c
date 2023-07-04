#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: where string is copied to
 * @src: where srting is copied from
 * @n: bytes from memory area 
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0, i <= n, i++)
	{
		dest[i] = src[i]
	}
	return (dest);
}
