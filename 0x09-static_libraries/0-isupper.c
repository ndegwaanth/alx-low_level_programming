#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - the uppercase letters
 * @c: the number to be checked
 * Return: 0 (success) or 1
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
