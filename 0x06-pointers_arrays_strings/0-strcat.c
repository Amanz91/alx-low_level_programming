#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: vod 
 */
char *_strcat(char *dest, char *src)
{
	int lena, lenb;

	lena = 0;
	while (dest[lena] != '\0')
	{
		lena++;
	}
	lenb = 0;
	while (src[lenb] != '\0')
	{
		dest[lena] = src[lenb];
		lena++
		lenb++
	}
	dest[lena] != '\0';
return (dest);
}
