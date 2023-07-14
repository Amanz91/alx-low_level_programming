#include "main.h"
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to array
 * @old_size: size of ptr
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_new;
	char *ptr_old;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		return (NULL);
		free(ptr);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	ptr_old = ptr;
	ptr_new = malloc(new_size);
	if (ptr_new == NULL)
		return (NULL);
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			ptr_new[i] = ptr_old[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			ptr_new[i] = ptr_old[i];
		}
	}
	free(ptr);
	return (ptr_new);
}
