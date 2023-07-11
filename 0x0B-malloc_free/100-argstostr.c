#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - split string into words
 * @ac: input value
 * @av: input value
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int m, n, p, sum = 0;
	char *string;
	char *pointer;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < ac; m++)
	{
		pointer = av[m];
	}
	n = 0;
	while (pointer[n++])
	{
		sum++;
	}
	sum++;
	string = (char *)malloc(sizeof(char) * (sum + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	m = 0;
	n = 0;
	for (; m < ac && n < sum; m++)
	{
		pointer = av[m];
		p = 0;
	while (pointer[p])
	{
		string[n] = pointer[p];
		p++;
		n++;
	}
	string[n++] = '\n';
	}
	string[n] = '\0';
	return (string);
}
