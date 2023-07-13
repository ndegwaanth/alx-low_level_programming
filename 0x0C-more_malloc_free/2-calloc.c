#include "main.h"
#include <stdlib.h>
/**
 * *_fill_memory - fill the memory spaces
 * @str: where is filled
 * @c: to be copied
 * @m: times
 * Return: pointer
 */
char *_fill_memory(char *str, char c, unsigned int m)
{
	unsigned int n;

	n = 0;
	while (n < m)
	{
		str[n] = c;
	}
	return (str);
}
/**
 * *_calloc - allocate memory for an array
 * @nmemb:  number of elements
 * @size: size of elements
 * Return: return a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *string;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	string = malloc(size * nmemb);
	if (string == NULL)
		return (NULL);

	_fill_memory(string, 0, nmemb * size);
	return (string);
}
