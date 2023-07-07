#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - the starting point
 * @s: input values
 * @b: input value
 * @n: input value
 * Return: 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	return memset(s, b, n);
}
