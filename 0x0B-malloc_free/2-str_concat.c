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

	p = q = 0;
	if (s1 != NULL)
	{
		m = 0;
		while (s1[m + 1] != '\0')
		{
			p = p + 1;
		}
	}
	else if (s2 != NULL)
	{
		m = 0;
		while (s2[m++] != '\0')
		{
			q++;
		}
	}
	sum = q + p;
	pointer = (char *)malloc(sizeof(char) * (sum++));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < p; m++)
	{
		pointer[m] = s1[m];
	}
	n = 0;
	while (n < q)
	{
		pointer[m] = s2[n];
		n++;
		m++;
	}
	pointer[sum] = '\0';
	return (pointer);
}
