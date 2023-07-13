#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocate a memory bloc
 * @old_size: size in bytes allocated space
 * @new_size: size in bytes of new memory
 * @ptr: previous pointer to memory
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	char *pointer_old;
	unsigned int m;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	else
		pointer = malloc(new_size);
	if (!ptr)
	{
		return (NULL);
	}
	else
		pointer_old = malloc(new_size);
	if (new_size < old_size)
	{
		for (m = 0; m < old_size; m++)
			pointer[m] = pointer_old[m];
	}
	free(ptr);
	return (pointer);
}

