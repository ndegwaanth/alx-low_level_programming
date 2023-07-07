#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - the starting point
 * @s: value to be inputed
 * @accept: input value
 * Return: 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	return strspn(s, accept);
}
