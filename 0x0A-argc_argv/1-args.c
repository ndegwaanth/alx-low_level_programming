#include "main.h"
#include <stdio.h>
/**
 * main - display all the arguments it receive
 * @argc: number of arguments
 * @argv: number of array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
