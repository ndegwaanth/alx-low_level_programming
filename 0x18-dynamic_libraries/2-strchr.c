#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: a string to search character c
 * @c: character to be searched in s
 * Return: if c occurs the pointer is being returned if not a null is returned
 */
char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
		{
			return (s + m);
		}
	}
	return ('\0');
}
