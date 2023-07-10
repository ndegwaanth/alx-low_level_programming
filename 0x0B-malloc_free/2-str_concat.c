#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concantenate two string
 * @s1: string one
 * @s2: string two
 * Return: Null
*/
char *str_concat(char *s1, char *s2)
{
	int m, n, p, q, sum;
	char *pointer;

	m = 0;
	n = 0;
	p = q = 0;
	if (s1 != NULL)
	{
		while (s1[m + 1] != '\0')
		{
			p = p + 1;
		}
	}
	else if (s2 != NULL)
	{
		while (s2[m + 1] != '\0')
		{
			q++;
		}
	}
	sum = q + p;
	pointer = malloc(sizeof(char) * (sum++));
	for (; n < p; n++)
	{
		pointer[n] = s1[n];
	}
	while (n < q)
	{
		pointer[n] = s2[n];
	}
	pointer[sum] = '\0';
	return (pointer);
}
