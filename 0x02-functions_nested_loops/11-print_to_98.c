#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all the natural numbers from n to 98
 * @n: the number that will be passed
 */
void print_to_98(int n)
{
	int k, j;

	if (n <= 98)
	{
		for (k = n; k <= 98; k++)
		{
			if (k != 98)
				printf("%d,", k);
			else if (k == 98)
				printf("%d\n", k);
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d\n", j);
			else if (j == 98)
				printf("%d", j);
		}
	}
}
