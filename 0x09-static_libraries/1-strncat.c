#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - link two string
 * @dest: value to be inputed
 * @src: value to be inputed
 * @n:value to be inputed
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return strncat(dest, src, n);
}
