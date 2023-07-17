#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - defination of a struct dog
 * @d: pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: this program offer the trait a dog can have
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
