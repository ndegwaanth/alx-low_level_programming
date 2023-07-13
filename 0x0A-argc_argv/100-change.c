#include "main.h"
#include <stdio.h>
/**
 * main - display minimum number of coins to make changes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int m, n, p;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc < 0)
	{
		printf("0\n");
	}
	m = atoi(argv[1]);
	n = 0;
	p = 0;

	while (n < 5 && m >= 0)
	{
		while (m >= coins[n])
		{
			p = p + 1;
			m = m - coins[n];
		}
		p++;
	} n++;
	printf("%d\n", p);
	return (0);
}


