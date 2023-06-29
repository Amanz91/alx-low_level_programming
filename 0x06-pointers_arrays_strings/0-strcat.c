#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lena, lenb, i;

	while (dest[i] != '\0')
	{
		lena++;		
	}
	while (src[i] != '\0')
	{
		lenb++;
	}
	for (i = 0; i <= lenb; i++)
	{
		dest[lena + 1] = src[i];
	}
return (dest);
}
