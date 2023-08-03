#include "main.h"
#include <string.h>

/**
 * binary_to_uint - convert number to unsigned int
 * @b: the string of 0 and 1
 * Return: char not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int sum = 0;
	int length = strlen(b);
	int multiply = 1;
	int m;

	for (m = length - 1; m >= 0; m--)
	{
		if (b[m] == '1')
		{
			sum += multiply;
		}
		multiply *= 2;
	}
	
	return (sum);
}
