#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	i = 0;
	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;

	while (src[i] != '\0')
	{
		len2++;
		i++;
	}
	i = 0;

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + 1] = src[i];
	}
	_putchar('\n')
return (dest);
}
