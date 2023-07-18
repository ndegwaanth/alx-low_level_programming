#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *  _string_length - gives the length of the string
 * @str: string given out
 * Return: length of string
*/
int _string_length(char *str)
{
	int m;

	for (m = 0; str[m] != 0;)
	{
		m++;
	}
	return (m);
}
/**
 * *_string_copy - copies the string
 * @dest: destination of a string
 * @src: the origin of the string
 * Return: 0 (success)
*/
char *_string_copy(char *dest, char *src)
{
	int n, k;

	for (n = 0; src[n] != '\0';)
	{
		n++;
	}
	k = 0;
	while (k < n)
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
/**
 * new_dog - creates new dog
 * @age: age of the dog
 * @name: name of the dog
 * @owner: owner of the dog
 * Return: pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int p, q;

	p = _string_length(name);
	q = _string_length(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (p + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (q + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->owner);
		return (NULL);
	}
	_string_copy(new_dog->name, name);
	_string_copy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
