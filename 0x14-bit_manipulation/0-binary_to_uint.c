#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - convert binary to decimal
 * @b: character being passd on ny the users
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int m = 0;
	unsigned int outcome = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; b[m] != '\0'; m++)
	{
		if (b[m] != '0' && b[m] != '1')
		{
			return (0);
		}
		outcome = outcome * 2 + (b[m] - '0');
	}
	return (outcome);
}
