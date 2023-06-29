#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lenb;

	lenb = 0;
	while (lenb < n && src[lenb] != '\0')
	{
		dest[lenb] = src[lenb];
		lenb++;
	}
	while (lenb < n)
	{
		dest[lenb] = '\0';
		lenb++;
	}
return (dest);
}
