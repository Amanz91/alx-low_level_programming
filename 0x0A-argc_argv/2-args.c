#include <stdio.h>
/**
 * main - a program that prints all arguments it receives. 
 * @argc: argument count
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i >= 1)
		{
			printf("%s\n", argv[i]);
		}
		else
		{
			printf("\n");
	}
	return (0);
}
