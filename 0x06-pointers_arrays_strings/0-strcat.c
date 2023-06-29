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
		i++;
	}
	while (src[i] != '\0')
	{
		lenb++;
		i++;
	}
	for (i = 0; i <= lenb; i++)
	{
		dest[lena + 1] = src[i];
	}
	_putchar('\n')
return (dest);
}
