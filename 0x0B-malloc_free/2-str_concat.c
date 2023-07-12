#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *cc;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	cc = malloc((len1 + len2 + 1) * sizeof(char));

	if (cc == NULL)
	{
		return (NULL);
	}
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		cc[len1] = s1[len1];
		len1++;
	}
	while (s2[len2] != '\0')
	{
		cc[len1] = s2[len2];
		len1++, len2++;
	}
	cc[len1] = '\0';
	return (cc);
}
