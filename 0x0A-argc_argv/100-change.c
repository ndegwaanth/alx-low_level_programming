#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int cent[5] = {25, 10, 5, 2, 1};
	int digit, m, outcome;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	digit = atoi(argv[1]);
	outcome = 0;
	if (digit < 0)
	{
		printf("0\n");
		return (0);
	}
	for (m = 0; m < 5 && digit >= 0; m++)
	{
		while (digit >= cent[m])
		{
			outcome = outcome + 1;
			digit = digit - cent[m];
		}
	}
	printf("%d\n", outcome);
	return (0);
}
