#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of byts
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lena, lenb;

	lena = 0;
	while (dest[lena] != '\0')
	{
		lena++;
	}
	lenb = 0;
	while (lenb < n && src[lenb] != '\0')
	{
		dest[lena] = src[lenb];
		lena++;
		lenb++;
	}
	dest[lena] = '\0';
return (dest);
}
