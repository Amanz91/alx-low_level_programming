#include "main.h"
/**
 * _strlen -  a function that swaps the values of two integers
 * @s: string to be checked
 * Return: length
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
