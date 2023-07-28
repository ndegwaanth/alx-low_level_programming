#include "main.h"

/**
 * swap_int - swap the values of two integer
 * @a: input one
 * @b: input two
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
