#include "main.h"
#include <stdio.h>
/**
 * main - print its name
 * @argc: the number of argument
 * @argv: the array of argument
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
