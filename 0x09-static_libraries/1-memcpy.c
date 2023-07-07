#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memcpy - copy memory area
 * @dest: storage
 * @src: the main location
 * @n: number of bytes
 * Return: the memory copied with n equivalent
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return memcpy(dest, src, n);
}
