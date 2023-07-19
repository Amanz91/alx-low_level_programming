#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a fun. that executes a function given as a parameter on 
 * each element of an array
 * @array: name of array
 * size: size of array
 * @action: pointer to a function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
