#include "main.h"
/**
 * wildcmp - compare two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: 1 if string are identical otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0)
	{
		if (*s2 != 0 && *s2 == 42)
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == 0);
	}
	else if (*s2 == 42)
	{
		return (wildcmp(s1 + 1, s2) || (wildcmp(s1, s2 + 1)));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
