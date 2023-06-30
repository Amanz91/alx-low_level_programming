#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string
 * Return: n
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		for ( ; (!(str[i] >= 'a' && str[i] <= 'z')); i++)

			if (str[index - 1] == ' ' || str[index - 1] == '\t' ||
					str[index - 1] == '\n' ||
					str[index - 1] == ',' ||
					str[index - 1] == ';' ||
					str[index - 1] == '.' ||
					str[index - 1] == '!' ||
					str[index - 1] == '?' ||
					str[index - 1] == '"' ||
					str[index - 1] == '(' ||
					str[index - 1] == ')' ||
					str[index - 1] == '{' ||
					str[index - 1] == '}' || index == 0)
			{
				n[i] = n[i] - 32;
			}
	}
	return (n);
}
