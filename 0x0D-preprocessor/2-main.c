#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that prints the name of the file it was compiled from
 * Return: 0
 */
int main()
{
	printf("%s\n", __FILE__);
}
