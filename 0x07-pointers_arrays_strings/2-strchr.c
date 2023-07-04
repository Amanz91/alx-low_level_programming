#include "main.h"
/**
 * _strchr - a function that fills memory with a constant byte.
 * @s: pointer to string
 * @c: char to be located
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s = c)
		{
			return (*s);
		}
		*s++;
	}
	return NULL;
}
