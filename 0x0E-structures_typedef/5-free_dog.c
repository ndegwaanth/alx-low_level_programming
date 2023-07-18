#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dog
 * @d: input values
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->owner);
	free(d->name);
}
