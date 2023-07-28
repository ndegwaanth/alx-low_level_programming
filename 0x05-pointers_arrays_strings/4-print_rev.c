#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: strig to print
 * Return: void
 */
void print_rev(char *s)
{
	int length, size;

	for (length = 0; *s != '\0'; length++)
	{
		s++;
	}
	s--;
	for (size = length; size > 0; size--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
