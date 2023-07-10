#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - return a pointer to a 2D array of intergers
 * @width: input value
 * @height: input value
 * Return: null on failure
*/
int **alloc_grid(int width, int height)
{	int m, n, **pointer;
	int sum = width = height;

	m = n = 0;
	if (sum <= 0)
	{
		return (NULL);
	}
	pointer = (int **)malloc(sizeof(int *) * height);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (; m < height; m++)
	{
		pointer[m] = (int *)(malloc(sizeof(int) * width));
		if (pointer[m] == NULL)
		{
			m--;
			while (m >= 0)
			{
				free(pointer[m]);
			} m++;
			free(pointer);
			return (NULL);
        	}
	}
	for (m = 0; m < height; m++)
	{
		n = 0;
		while (n < width)
		{
			pointer[m][n] = 0;
			n++; 
		}
	}
	return (pointer);
}
