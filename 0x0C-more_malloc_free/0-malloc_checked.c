#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory using malloc
 * @b: input value
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);
	if (space == NULL)
	{
		exit(98);
	}
	return (space);
}
