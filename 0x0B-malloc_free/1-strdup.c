#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to new allocated pointer
 * @str: the string to be passed
 * Return: return pointer
*/
char *_strdup(char *str)
{
	int m, n;
	char *pointer;

	if (str == NULL)
	{
		return (NULL);
	}
	m = 0;
	do {
	m++;
	} while (str[m] != '\0');

	pointer = malloc(sizeof(char) * (m++));

	if (pointer == NULL)
	{
		return (NULL);
	}
	n = 0;
	while (str[n])
	{
		pointer[n] = str[n];
		n++;
	}
	return (pointer);
}
