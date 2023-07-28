#include "main.h"

/**
 * rev_string - print a string in reverse
 * @s: strig to print
 * Return: void
 */
void rev_string(char *s)
{
	int length, size;
	char string = s[0];

	for (length = 0; s[length] != '\0';)
	{
		length++;
	}
	for (size = 0; size < length; size++)
	{
		length--;
		string = s[size];
		s[size] = s[length];
		s[length] = string;
	}
}
