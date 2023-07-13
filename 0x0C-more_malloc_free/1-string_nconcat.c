#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concantenate two string
 * @s1: string one
 * @s2: string two
 * @n: input value
 * Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *space;
	unsigned int m = 0, k = 0, p = 0, q = 0;

	for (; s1 && s1[p];)
	{
		p++;
	}
	for (; s2 && s2[q];)
	{
		q++;
	}
	if (n < q)
	{
		space = malloc(sizeof(char) * (p + n + 1));
	}
	else
	{
		space = malloc(sizeof(char) * (p + q + 1));
	}
	if (!space)
		return (NULL);


	while (m < p)
	{
		space[m] = s1[m];
		m++;
	}
	while (n < q && m < (p + n))
	{
		space[m++] = s2[k++];
	}
	while (n >= q && m < (p + q))
	{
		space[m++] = s1[k++];
	}
	space[m] = '\0';
	return (space);
}
