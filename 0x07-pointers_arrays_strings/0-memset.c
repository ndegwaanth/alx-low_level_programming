#include "main.h"
/**
 * _memset - fills the first n bytes of the memory
 * @s: memory that is pinted by s
 * @b: constant byte
 * @n: the number of times repeated
 * Return: a pointer to the memory area(s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m <= n; m++)
	{
		s[m] = b;
	}
	return (s);
}
