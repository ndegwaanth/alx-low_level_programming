#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - start operation
 * @argc: number of argument
 * @argv: array  of argument
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
