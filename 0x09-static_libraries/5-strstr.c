#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - the starting point
 * @haystack: valaue to be inputed
 * @needle: input value
 * Return: 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	return strstr(haystack, needle);
}
