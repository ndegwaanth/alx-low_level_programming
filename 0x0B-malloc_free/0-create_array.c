#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of char and utilize it
 * @size: the size of the array
 * @c: character to be printed out
 * Return: a poniter or NULL if it faills
*/
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int m;

	string = malloc(sizeof(char) * size);
	if (string == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	m = 0;
	while (m < size)
	{
		string[m] = c;
		m++;
	}
	return (string);
}
