#include "main.h"
/**
 * _strchr - a function that fills memory with a constant byte.
 * @s: pointer to string
 * @c: char to be located
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
