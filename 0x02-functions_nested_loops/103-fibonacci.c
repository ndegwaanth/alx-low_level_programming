#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, next, sum;

	m = 1;
	n = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (m < 4000000 && (m % 2) == 0)
		{
			sum = sum + m;
		}
		next = m + n;
		m = n;
		n = next;
	}
	printf("%lu\n", sum);
	return (0);
}
