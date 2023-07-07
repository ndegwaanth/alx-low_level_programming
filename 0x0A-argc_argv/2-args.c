#include "main.h"
#include <stdio.h>
/**
 * main - display all arguments it receive
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int m;

	m = 0;
	while (m < argc)
	{
		printf("%s\n", argv[m]);
		m++;
	}
	return (0);
}
