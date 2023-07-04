#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - display sum of two diagonal of square matrix
 * @a: a matrix
 * @size: the size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int m;
	int sum;
	int addition;

	sum = 0;
	addition = 0;

	for (m = 0; m < size; m++)
	{
		sum = sum + a[m];
		a = a + size;
	}
	a = a - size;
	for (m = 0; m < size; m++)
	{
		addition = addition + a[m];
		a = a - size;
	}
	printf("%d, %d\n", sum, addition);
}
