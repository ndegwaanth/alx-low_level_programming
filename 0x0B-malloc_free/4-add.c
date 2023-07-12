#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * identity - looks for string that are digit
 * @string: string value
 * Return: 0 (success)
*/

int identity(char *string)
{
	unsigned int digit;

	for (digit = 0; digit < strlen(string); digit++)
	{
	if (!isdigit(string[digit]))
	{
		return (0);
	}
	}
	return (1);
}
/**
 * main - print the result
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int digit;
	int conversion;
	int addition;

	addition = 0;
	for (digit = 1; digit < argc;)
	{
		if (identity(argv[digit]))
		{
			conversion = atoi(argv[digit]);
			addition = addition + conversion;
		}
		else
		{
			printf("Error\n");
			return (0);
		}
		digit++;
	}
	printf("%d\n", addition);
	return (0);
}
