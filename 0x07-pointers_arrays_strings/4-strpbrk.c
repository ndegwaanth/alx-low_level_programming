#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to locate
 * @accept: bytes of the string
 * Return: a pointer to the bytes in accept or null if no bytes found
 */
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
