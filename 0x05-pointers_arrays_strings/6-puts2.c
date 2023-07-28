#include "main.h"
/**
* puts2 - function should print only one character out of two
* starting with the first one
* @str: input
* Return: print
*/
void puts2(char *str)
{
	int length = 0;
	int t = 0;
	char *y = str;
	int size;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (size = 0 ; size <= t ; size++)
	{
		if (size % 2 == 0)
		{
			_putchar(str[size]);
		}
	}
	_putchar('\n');
}
