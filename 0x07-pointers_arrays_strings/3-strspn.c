#include "main.h"
/**
 * _strspn - gets the length of a prefix
 * @s: this the string
 * @accept: this represent the bytes
 * Return: return the initial string s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int m;

	while (*s)
	{
		for (m = 0; s[m]; m++)
		{
			if (*s == accept[m])
			{
				n++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (sizeof(s));
}
