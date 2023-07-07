#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - the starting point
 * @s: the value to be inputed
 * @accept: input value
 * Return: 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	return strpbrk(s, accept);
}
