#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of intergers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the new;y created array
 */
int *array_range(int min, int max)
{
	int *space;
	int m, n;

	if (min > max)
	{
		return (NULL);
	}

	m = max - min + 1;
	space = malloc(sizeof(int) * m);
	if (space == NULL)
	{
		return (NULL);
	}

	n = 0;
	while (min <= max)
	{
		space[n] = min++;
		n++;
	}
	return (space);
}
