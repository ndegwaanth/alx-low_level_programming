#include "main.h"
/**
 * _memcpy - copies n bytes
 * @n: number of copies
 * @src: memory bytes
 * @dest: destionation in memory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
